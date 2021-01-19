/*
 * @Author: SingleBiu
 * @Date: 2021-01-19 11:36:55
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-19 19:23:56
 * @Description: 冒泡排序
 */
#include<stdlib.h>
#include<stdio.h>

/**
 * @description: 冒泡排序
 * @param {int} arr 传入的数组
 * @param {int} len 传入的数组的长度
 * @return {*}
 */
void bubuleSort(int arr[],int len)
{
    int i,j,temp;
    for (i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len - i -1  ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }
}

int main()
{
    int arr[] ={3,2,1,4,5};
    int i;
    int len = sizeof(arr)/sizeof(int);
    
    bubuleSort(arr,len);
    
    for ( i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    
    system("pause");
    return 0;
}
