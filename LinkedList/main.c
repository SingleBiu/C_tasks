/*
 * @Author: SingleBiu
 * @Date: 2021-06-30 15:27:02
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-06-30 15:59:50
 * @Description: file content
 */
#include<stdlib.h>
#include<stdio.h>
#include"LinkedList.h"

int main(int argc, char const *argv[])
{
    int num;
    Node *h = NULL;

    while (1)
    {
        scanf("%d",&num);
        if (num == 0)
        {
            break;
        }
        
        Node *p = (Node*)malloc(sizeof(*p));
        p->data = num;
        p->next = NULL;

        h = insert(h,p);

    }
    
    print_Node(h);

    return 0;
}