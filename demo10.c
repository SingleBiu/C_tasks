/*
 * @Author: SingleBiu
 * @Date: 2021-01-15 14:31:17
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 10:11:06
 * @Description: 计算当天距年末还有多少天
 */

#include<stdio.h>
#include<stdlib.h>

#define uint unsigned int
#define BIGMONTH 31
#define SMALLMONTH 30

uint checkDate(uint year,uint month,uint day){
    uint totalDays,FEB;
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        totalDays = 366;
        FEB = 29;
    }else
    {
        totalDays = 365;
        FEB = 28;
    }
    /**
     * 另做
     * 可以利用switch case语句不加break顺序相加天数，再与总天数相减
     * */

    // 但是   ↓ 又 不 是 不 能 用
    switch (month)
    {
        case 1:
            totalDays = totalDays - day;
            return totalDays;
            break;
        case 2:
            totalDays = totalDays - BIGMONTH - day;
            return totalDays;
            break;
        case 3:
            totalDays = totalDays - FEB - BIGMONTH - day;
            return totalDays;
            break;
        case 4:
            totalDays = totalDays - FEB - 2*BIGMONTH - day;
            return totalDays;
            break;
        case 5:
            totalDays = totalDays - FEB - 2*BIGMONTH - SMALLMONTH - day;
            return totalDays;
            break;
        case 6:
            totalDays = totalDays - FEB - 3*BIGMONTH - SMALLMONTH - day;
            return totalDays;
            break;
        case 7:
            totalDays = totalDays - FEB - 3*BIGMONTH - 2*SMALLMONTH - day;
            return totalDays;
            break;
        case 8:
            totalDays = totalDays - FEB - 4*BIGMONTH - 2*SMALLMONTH - day;
            return totalDays;
            break;
        case 9:
            totalDays = totalDays - FEB - 5*BIGMONTH - 2*SMALLMONTH - day;
            return totalDays;
            break;
        case 10:
            totalDays = totalDays - FEB - 5*BIGMONTH - 3*SMALLMONTH - day;
            return totalDays;
            break;
        case 11:
            totalDays = totalDays - FEB - 6*BIGMONTH - 3*SMALLMONTH - day;
            return totalDays;
            break;
        case 12:
            totalDays = totalDays - FEB - 6*BIGMONTH - 4*SMALLMONTH - day;
            return totalDays;
            break;
    
    default:
        break;
    }
}

int main()
{
    uint year,month,day;
    uint leftDays;
    scanf("%d %d %d",&year,&month,&day);
    leftDays =  checkDate(year,month,day);
    printf("\n");
    printf("%d\n",leftDays);
    system("pause");
    return 0;
}