/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 15:32:52
 * @LastEditors: SingleBiu
<<<<<<< HEAD
 * @LastEditTime: 2021-01-16 16:26:46
 * @Description: file content
-->
# C_tasks
C语言编程题练习

试题

1、 在键盘上输入一个年份，判断该年是否为闰年

    int year;

    scanf(“%d”, &year);

2、 在键盘上输入三个边长，判断这三个边长是否能够组成一个三角形

    int a, b, c;

    scanf(“%d %d %d”, &a, &b, &c);

3、 在键盘上输入一个字符，如果这个字符是小写的则转换成大写，
    如果是大写的则转换成小写的,如果是数字的字符形式则转换成该数字的整数形式

4、 将100~999之间的水仙花数打印出来

    水仙花数：x = 个位立方+十位立方+百位立方

5、 从键盘上输入一个int类型的整数，计算这个整数的二进制表达式形式中有多少个1？

6、 求连续的正整数的和

    在键盘上输入两个数字，分别赋值给a 和 x

    Scanf(“%d %d”,&a, &x);

    计算 a + aa + aaa+ …x个a的和

7、交换数组数的位置，奇数放前面偶数放后面

8、 输入正整数然后逆序输出

9、 输入十六进制[0-9a-zA-Z]输出相应的int

10、计算当天距年末还有多少天

11、求两个数最大公约数与最小公倍数
=======
 * @LastEditTime: 2021-01-16 16:12:41
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
>>>>>>> 5eba0d6f82ba8664308cebe6e34710b79f87d3d3
