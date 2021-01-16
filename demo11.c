/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 15:32:52
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 16:28:21
 * @Description: 求两个数最大公约数
 */

#include<stdio.h>
#include<stdlib.h>

int num1=0,num2=0;
// 函数声明
// 交换两个数
void swap(int a,int b);
// 菜单函数
void menu();
// 求最大公约数
int gcd();
// 求最小公倍数
int lcm();


/**
 * @description: 交换两个数
 * @param {int} a
 * @param {int} b
 * @return {*}
 */
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/**
 * @description: 菜单函数
 * @param {*}
 * @return {*}
 */
void menu()
{
    printf("---- 1.GCD ----\n");
    printf("---- 2.LCM ----\n");
    int x;
    scanf("%d",&x);
    printf("input two num:\n");
    scanf("%d %d",&num1,&num2);
    int rs;
    switch (x)
    {
        case 1:
            rs = gcd();
            printf("max gcd = ");
            printf("%d\n",rs);
            break;
        case 2:
            rs = lcm();
            printf("min lcm = ");
            printf("%d\n",rs);
            break;
        
        default:
            return;
            break;
    }
}


/**
 * @description: 求两个数最大公约数
 * @param {*}
 * @return {*}
 */
int gcd()
{
    int rs;
    while (1)
    {
        if (num1>num2)
        {
            swap(num1,num2);
        }
        rs = num1 % num2;
        if (rs==0)
        {
            return num2;
            break;
        }
        num1 = num2;
        num2 = rs;
    }
}

int lcm()
{
    // 两数的最大公约数
    int rs_gcd=0,rs=0;
    rs_gcd = gcd();
    // 最小公倍数等于两数乘积除以最大公约数
    rs = (num1*num2)/rs_gcd;
    return rs;
}
int main()
{
    menu();
    system("pause");
    return 0;
}
