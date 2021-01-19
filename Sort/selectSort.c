/*
 * @Author: SingleBiu
 * @Date: 2021-01-19 14:19:04
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-19 19:22:40
 * @Description: 选择排序
 */
#include<stdlib.h>
#include<stdio.h>

/**
* @description: 交换两个数
* @param {int} a
* @param {int} b
* @return {*}
*/
void swap(int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * @description: 选择排序
 * @param {int} arr 传入的数组
 * @param {int} len 传入的数组长度
 * @return {*}
 */
void selectSort(int arr[],int len)
{
    int i,j;
     for ( i = 0; i < len - 1; i++)
    {
        int min = i;
        for ( j = i+1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}

int main()
{
    int arr[]={5,1,2,4,3};
    
    int i;
    int len = sizeof(arr)/sizeof(int);
   
    selectSort(arr,len);
    
    for ( i = 0; i < len ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    system("pause");
    return 0;
}
