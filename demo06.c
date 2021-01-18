/*
 * @Author: SingleBiu
 * @Date: 2021-01-12 18:14:47
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-01-18 16:23:03
 * @Description:    求连续的正整数的和
 *                  在键盘上输入两个数字，分别赋值给a 和 x
 *                  Scanf(“%d %d”,&a, &x);
 *                  计算 a + aa + aaa+ …x个a的和
 */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int add(int a,int x){
    int i=0;
    int res=0,num=1,sum=0;
    while (i < x)
    {
        res+=a*num;
        num=num*10;
        sum+=res;
        i++;
    }
    return sum;
}

int main(){
    int a,x,sum;
    scanf("%d %d",&a,&x);
    if (x==1)
    {
        sum=a;
    }
    else
    {
        sum=add(a,x);
    }
    printf("%d\n",sum);

    system("pause");
    return 0;
}
