/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 16:45:57
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-12 19:14:38
 * @Description:    在键盘上输入一个字符，
 *                  如果这个字符是小写的则转换成大写，
 *                  如果是大写的则转换成小写的,如果是数字的字符形式则转换成该数字的整数形式
 */

#include<stdio.h>
#include<stdlib.h>


int main(){
    char ch;
    ch = getchar();
    if ('a'<=ch && ch<='z')
    {
        ch=ch-32;
    }
    else if ('A'<=ch && ch<='Z')
    {
        ch=ch+32;
    }
    else if ('0'<=ch && ch<='9')
    {
        int ch=(int)ch;
        // char 占1个字节 int 占四个字节
        printf("%d\n",sizeof(ch));
    }

    putchar(ch);
    
    printf("\n");
    system("pause");
    return 0;
}
