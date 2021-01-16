/*
 * @Author: SingleBiu
 * @Date: 2021-01-16 16:35:26
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-16 17:00:32
 * @Description: 求1000以内所有的完数
 *               完数定义:它所有的真因子（即除了自身以外的约数）
 *                        的和（即因子函数恰好等于它本身。
 *               第一个完全数是6 
 *               6 = 1x2x3 - 1+2+3
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j=1;
    int sum=0;
    for (i = 2; i < 1000; i++)
    {
        sum = 0;
        for ( j = 1; j < i; j++)
        {
            if (i % j ==0)
            {
                sum += j;
            }
        }
        
        if (sum == i)
        {
            printf("%d ",i);
        }
    }
    system("pause");
    return 0;
}
