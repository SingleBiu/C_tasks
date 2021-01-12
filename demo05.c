/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 17:41:57
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-12 19:13:59
 * @Description: 从键盘上输入一个int类型的整数
 *               计算这个整数的二进制表达式形式中有多少个1？
 */

#include<stdio.h>
#include<stdlib.h>
#define NUM 2;
int main(){
    int input,result=0;
    int arr[16];
    int i=1,j;
    scanf("%d",&input);
    printf("%d的二进制数为:\n",input);
    // 转换二进制数
    for (int j = 0; j < 16; j++)
    {
        i=input%NUM;
        input=input/NUM;
        arr[j]=i;
    }
    // 输出打印二进制数
    for (j = 15; j>=0; j--)
    {
        printf("%d",arr[j]);
        if (j % 4 == 0)
        {
            printf(" ");
        }
        
    }
    for (i = 0; i < 15; i++)
    {
        if (arr[i]==1)
        {
            result++;
        }
        
    }
    printf("\n该数的二进制数包含 %d 个1\n",result);
    system("pause");
    return 0;
}