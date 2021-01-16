/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 19:48:07
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 19:58:30
 * @Description: 求任意数的任意次方的最后三位数
 */
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int rs = 1,num = 0,mi = 0;
    scanf("%d",&num);
    scanf("%d",&mi);
    for (int i = 0; i < mi; i++)
    {
        rs = (rs * num)%1000;
    }
    printf("%d\n",rs);
    system("pause");
    return 0;
}

