/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 16:22:47
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-12 19:14:58
 * @Description: 在键盘上输入一个年份，判断该年是否为闰年
 */

#include<stdio.h>
#include<stdlib.h>

#define uint unsigned int


int main(){
    uint year;
    printf("请输入年份:");
    scanf("%d",&year);
    if ((year % 4 == 0 )&& (year % 100 != 0 )||(year % 400 == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    system("pause");
    return 0;
}