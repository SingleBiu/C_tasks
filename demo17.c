/*
 * @Author: SingleBiu
 * @Date: 2021-01-27 16:46:14
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-27 20:25:09
 * @Description: 大整数的加减
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define M 100

// 全局变量 用于保存运算的类型     1：加法 |   2：减法
int type;
// 全局变量 控制减法运算中负号的显示
int minus;

int Add(char str1[],char str2[],int sum[]);
int Subtract(char str1[],char str2[],int sum[]);
void printResult(char *str1,char *str2 ,int *sum,int len,int type);


/**
 * @description: 加法
 * @param {char} str1
 * @param {char} str2
 * @param {int} sum
 * @return {int} len
 */
int Add(char str1[],char str2[],int sum[])
{
    type = 1;
    // 传入的字符数组若有一个为空则退出
    if (strcmp(str1,"") == 0 || strcmp(str2,"") == 0)
    {
        return -1;
    }
    
    int i,j,len;
    int tmp[M] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    len = len1>len2 ? len1:len2;
    
    for ( i = len1-1,j = 0; i >= 0; i--,j++)
    {
        sum[j] = str1[i] -'0';
    }
    
    for ( i = len2-1,j = 0; i >= 0; i--,j++)
    {
        tmp[j] = str2[i] -'0';
    }

    for ( i = 0; i <= len ; i++)
    {
        sum[i] += tmp[i];
        if (sum[i]>9)
        {
            sum[i] -= 10;
            sum[i+1]++;
        }
    }

    if (sum[len]!= 0)
    {
        len++;
    }
    return len;
}

/**
 * @description: 比较字符串中数字的大小
 * @param {char} *str1
 * @param {char} *str2
 * @return {int}    0：两个字符串相等   |   大于0：str1 > str2  |   小于0:str2 > str1 
 */
int cmpNum(char *str1,char *str2)
{
    if (strlen(str1) == strlen(str2))
    {
        return strcmp(str1,str2);
    }
    else
        return strlen(str1) - strlen(str2);
}

/**
 * @description: 减法
 * @param {char} str1
 * @param {char} str2
 * @param {int} sum
 * @return {int} len
 */
int Subtract(char str1[],char str2[],int sum[])
{
    type = 2;
    // 传入的字符数组若有一个为空则退出
    if (strcmp(str1,"") == 0 || strcmp(str2,"") == 0)
    {
        return -1;
    }

    int i,j,len,flag;
    int tmp[M] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    len = len1>len2 ? len1:len2;
    
    for ( i = len1-1,j = 0; i >= 0; i--,j++)
    {
        sum[j] = str1[i] -'0';
    }
    
    for ( i = len2-1,j = 0; i >= 0; i--,j++)
    {
        tmp[j] = str2[i] -'0';
    }

    for ( i = 0; i <= len ; i++)
    {
        sum[i] -= tmp[i];
        if (sum[i]<0)
        {
            sum[i] += 10;
            sum[i-1]--;
        }
    }

    if (sum[len]!= 0)
    {
        len++;
    }
    return len;
}

/**
 * @description: 结果输出函数
 * @param {char} *str1
 * @param {char} *str2
 * @param {int} *sum
 * @param {int} len
 * @param {int} type    运算类型    1：加法 |  2：减法
 * @return {*}
 */
void printResult(char *str1,char *str2 ,int *sum,int len,int type)
{
    switch (type)
    {
    case 1:
        printf("%s\n\t+\n%s\n\t=\n",str1,str2);
        break;
    case 2:
        printf("%s\n\t-\n%s\n\t=\n",str1,str2);
        break;
    default:
        break;
    }
    
    if(minus)
        printf("-");
    for (int i = len-1; i >=0 ; i--)
    {
        printf("%d",sum[i]);
    }
    printf("\n\n");
}

int main()
{
    char s1[] = "3456789";
    char s2[] = "23456789";
    int sum[M] = {0};
    int len;
    // 初始化 减号显示
    minus = 0;    
    // 加法
    // len = Add(s1,s2,sum);

    // 减法
    if (cmpNum(s1,s2) == 0)
    {
        printResult(s1,s2,sum,1,2);
        system("pause");
        return 0;
    }
    else if (cmpNum(s1,s2) > 0)
    {
        len = Subtract(s1,s2,sum);
    }
    else
    {
        minus = 1;
        len = Subtract(s2,s1,sum);
    }


    //  len == -1 表示至少一个字符数组为空，程序异常退出
    if (len == -1)
    {
        return -1;
    }
    
    //输出结果
    printResult(s1,s2,sum,len,type);

    system("pause");
    return 0;
}
