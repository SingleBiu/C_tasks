/*
 * @Author: SingleBiu
 * @Date: 2021-01-13 14:32:46
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-13 14:38:56
 * @Description: 交换数组数的位置，奇数放前面偶数放后面
 */
#include<stdio.h>
#include<stdlib.h>
int a[] = {10,3,4,6,1,2,8,5,7,12,9};
int len = sizeof(a)/4;

/**
 * @description: 检查a[x]是否为偶数，不是则移动到下一位
 * @param {int x} 传入的数组的下标 
 * @return {0、1} 
 */ 
int check(int x){
    if (a[x] % 2 == 0)
    {
        return 1;
    }
    else return 0;
}

/**
 * @description:交换数组中两个元素的值
 * @param {int i}传入数组下标 
 * @return {type} 
 */
void swap(int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

/**
 * @description: 判断数组元素的奇偶性并执行交换
 * @param {type} 
 * @return {type} 
 */
void move(){
    int i,j;
    j = len-1;
    for ( i = 0; i < len ; )
    {
        //判断是否为偶数
        if (check(i))
        {
            //判断数组末尾是否为偶数 是则执行交换，否则下标前移
            if (check(j))
            {
                j--;
            }
            else
            {
                swap(i,j);
                i++;
            }
        }
        else
        {
            i++;
        }
        //i>=j则已完成交换 跳出循环
        if (i>=j)
        {
            break;
        }   
    }
}

/**
 * @description: 打印执行结果
 * @param {type} 
 * @return {type} 
 */
void printResult(){
    //打印结果
    for (int k = 0; k < len; k++)
    {
        printf("%d ",a[k]);
    }
}

int main(){ 
    move();
    printResult();
    system("pause");
    return 0;
}
