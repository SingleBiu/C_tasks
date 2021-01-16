/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 09:52:26
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 10:09:08
 * @Description: 输入正整数然后逆序输出
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{      
    unsigned int input;
    scanf("%d",&input);
    unsigned int num;
    do  
    {
        num = input%10;
        input /=10;
        printf("%d ",num);
    }
    while (input!=0);
    system("pause");
    return 0;
}
