/*
 * @Author: SingleBiu
 * @Date: 2021-01-20 16:46:37
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-20 19:37:16
 * @Description: 求一个二维数组的鞍点
 *               鞍点: 行最大 列最小
 */
#include<stdlib.h>
#include<stdio.h>

#define ROWS 5
#define COLUMNS 5

int main()
{
    int a[ROWS][COLUMNS] = 
    {
    {1,0,0,0,0},
    {2,6,9,5,8},
    {9,9,7,8,10},
    {3,2,9,6,7},
    {6,3,8,5,7}
    };

    int i,j,k,flag = 0;
    
    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLUMNS; j++)
        {      
            // 遍历列
            for ( k = 0; k < ROWS; k++)
            {
                if (k == j)
                {
                    continue;
                }
                
                if (a[i][j]<a[i][k])
                {
                    flag = 1;
                    break;
                }
            }
            // 遍历行
            for ( k = 0; k < COLUMNS; k++)
            {
                if (k == i)
                {
                    continue;
                }
                
                if (a[i][j]>a[k][j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                flag = 0;
                break;
            }
            else
            {
                printf("row:%d col:%d num:%d\n",i,j,a[i][j]);
            }
        }
        
    }
    

    system("pause");
    return 0;
}