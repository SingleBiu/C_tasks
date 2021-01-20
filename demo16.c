/*
 * @Author: SingleBiu
 * @Date: 2021-01-20 16:00:16
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-20 19:38:09
 * @Description: 求一个二维数组中山顶元素的个数
 *               山顶元素: 比上下左右的元素都大
 */
#include<stdlib.h>
#include<stdio.h>

#define ROWS 5
#define COLUMNS 5



int main()
{
    int a[ROWS][COLUMNS] = {{1,2,3,4,5},
                            {4,6,1,5,8},
                            {2,5,7,3,6},
                            {3,2,7,6,7},
                            {6,3,1,5,7}};
    int i,j;
    int x=0;
    // for ( i = 0; i < ROWS; i++)
    // {
    //     for ( j = 0; j < COLUMNS; j++)
    //     {
    //         scanf("%d",&num);
    //     }
    // }
    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLUMNS; j++)
        {
            if( ((i-1)<0 || a[i][j]>a[i-1][j])&& //上
				((i+1)>ROWS-1 || a[i][j]>a[i+1][j])&&//下
				((j-1)<0 || a[i][j]>a[i][j-1])&& //左
				((j+1)>ROWS-1||a[i][j]>a[i][j+1]))//右
			{
				x++;
				printf("a[%d][%d]= %d  nums:%d\n",i,j,a[i][j],x);
			}         
        }    
    }
    system("pause");
    return 0;
}
