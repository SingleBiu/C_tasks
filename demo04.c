/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 17:03:04
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-12 19:14:18
 * @Description: 将100~999之间的水仙花数打印出来
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define uint unsigned int
int main(){
    uint ge,shi,bai;
    for (uint num = 100; num < 1000; num++)  
    {
        ge=num%10;
        shi=num/10%10;
        bai=num/100;
        if (num==(pow(ge,3)+pow(shi,3)+pow(bai,3)))
        {
            printf("%d ",num);
        }
    }
    system("pause");
    return 0;
}