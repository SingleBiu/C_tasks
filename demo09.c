/*
 * @Author: SingleBiu
 * @Date: 2021-01-15 11:36:12
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-15 13:49:53
 * @Description: 输入十六进制[0-9a-zA-Z]输出相应的int
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned char ch;
    scanf("%c",&ch);
    if (ch<'0' || ch >97+26)
    {
        printf("invalid input\n");
        system("pause");
        return 0;
    }
    
    if (ch>=97 && ch<=97+26)
    {
        ch-=32;
    }

    if (ch>=65 && ch<=65+26)
    {
        ch-=55;
    }
    
    if (ch>='0' && ch<='9')
    {
        ch-=48;
        int ch = (int)ch;
    }

    printf("%d\n",ch);
    system("pause");
    system("cls");

    return 0;
}