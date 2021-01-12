/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 16:40:26
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-12 19:14:45
 * @Description: 在键盘上输入三个边长，判断这三个边长是否能够组成一个三角形
 */

#include<stdio.h>
#include<stdlib.h>

#define uint unsigned int


int main(){
    uint a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b>c)&&(a+c>b)&(b+c>a))
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