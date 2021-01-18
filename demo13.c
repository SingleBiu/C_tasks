/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 18:14:20
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-18 16:56:11
 * @Description: 将一个数分解为连续的正整数之和
 *              15 = 1+2+3+4+5
 *                 = 4+5+6
 *                 = 7+8
 */

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int num;
    int sum = 0;
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        sum = 0;
        for (int j = i; j < num; j++)
        {
            sum +=j;
            if (sum>num)
            {
                break;
            }
            
            if (sum==num)
            {
                for (int k = i; k <=j; k++)
                {
                    printf("%d ",k);
                }
                printf("\n");
            }
        }
    }
    printf("End\n");
    system("pause");
    return 0;
}
