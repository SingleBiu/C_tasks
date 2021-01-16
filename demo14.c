/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 19:02:21
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 19:34:32
 * @Description: 将一个正整数分解质因数
 */

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int num;
    int i;
    scanf("%d",&num);
    printf("%d=",num);
    for (int i = 2; i <= num; i++)
    {
        while (num!=i)
        {
            if (num%i==0)
            {
                printf("%d*",i);
                num/=i;
            }
            else 
                break;
        }
    }
    printf("%d\n",num);
    
    system("pause");
    return 0;
}
