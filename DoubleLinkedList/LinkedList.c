/*
 * @Author: SingleBiu
 * @Date: 2021-07-01 18:55:31
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-07-02 08:47:00
 * @Description: 不带头结点的双向链表
 */
#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

/**
 * @description: 双向链表 尾插法
 * @param {LinkedList} *h
 * @param {LinkedList} *p
 * @return {LinkedList} *h
 */
LinkedList *insert_Node_Tail(LinkedList *h,LinkedList *p)
{
    if (h == NULL)
    {
        return p;
    }

    if (p == NULL)
    {
        return h;
    }
    
    LinkedList *pk = NULL;
    
    pk = h;

    while (pk->next)
    {
        pk = pk->next;
    }
    pk->next = p;
    p->prev = pk;
    p->next = NULL;

    return h;
}

/**
 * @description: 双向链表 头插法
 * @param {LinkedList} *h
 * @param {LinkedList} *p
 * @return {LinkedList} *h
 */
LinkedList *insert_Node_Head(LinkedList *h,LinkedList *p)
{
    if (h == NULL)
    {
        return p;
    }
    
    if (p == NULL)
    {
        return h;
    }
    
    LinkedList *pk = NULL;

    pk = h;

    p->next = h;
    h->prev = p;
    p->prev = NULL;
    h = p;
    
    return h;
}

/**
 * @description: 双向链表 插入结点后保持升序
 * @param {LinkedList} *h
 * @param {LinkedList} *p
 * @return {LinkedList} *h
 */
LinkedList *insert_Node_Ascending(LinkedList *h,LinkedList *p)
{
    if (h == NULL)
    {
        return p;
    }

    if (p == NULL)
    {
        return h;
    }
    
    LinkedList *pr = NULL;
    LinkedList *pk = NULL;

    pk = h;

    while (pk)
    {
        if (pk->data >= p->data)
        {
            break;
        }
        
        pr = pk;
        pk = pk->next;
    }
    
    if (pk == NULL) //pk指向了尾结点的下一个，此时pr指向尾结点
    {
        pr->next = p;
        p->prev = pr;
        p->next = NULL;
    }
    else 
    {
        if (pk == h) //pk指向头结点
        {
            p->next = h;
            h->prev = p;
            h = p;
        }
        else //待插入的位置在pr pk之间
        {
            p->next = pk;
            pk->prev = p;

            pr->next = p;
            p->prev = pr;
        }
    }
    
    return h;
    
}

LinkedList *delete_All_X_Node(LinkedList *h ,ElemType val)
{
    if (h == NULL)
    {
        return NULL;
    }
    
    if (val == NULL)
    {
        return h;
    }
    
    LinkedList *pk = NULL;
    LinkedList *ps = h;
    
    while (1)
    {
        pk = ps;
    
        while (pk)
        {
            if(pk->data == val)
            {
                break;
            }
            pk = pk->next;
        }
    
        if (pk == NULL)
        {
            return h;
        }

        ps = pk->next;
        
        if (pk == h)  //是头结点
        {
            
            if (h->next)
            {
               h = h->next;
               pk->next = NULL;
               h->prev = NULL;
            }
            free(pk);
        }
        else if (pk->next == NULL) //是尾结点
        {
            pk->prev->next = NULL;
            pk->prev = NULL;
            free(pk);
        }
        else //在中间
        {
            pk->prev->next = pk->next;
            pk->next->prev = pk->prev;

            pk->prev = NULL;
            pk->next = NULL;
            free(pk);
        }
    }
}

/**
 * @description: 双向输出链表的所有结点
 * @param {LinkedList} *h
 * @return {void}
 */
void print_All_Node(LinkedList *h)
{   
    if (h == NULL)
    {
        printf("NULL\n");
        return;
    }
    
    LinkedList *tmp = NULL;
    LinkedList *last = NULL;
    tmp = h;

    printf("-->\n");
    while (tmp)
    {
        printf("(%d)<->",tmp->data);
        last = tmp;
        tmp = tmp->next;
    }
    printf("NULL\n");
    printf("<--\n");
    while (last)
    {
        printf("(%d)<->",last->data);
        last = last->prev;
    }
    printf("NULL\n");
}



int main(int argc, char const *argv[])
{
    LinkedList *h = NULL;
    
    ElemType data;
    while (1)
    {
        LinkedList *p = NULL;
        p = (LinkedList*)malloc(sizeof(p));
        p->next = NULL;
        p->prev = NULL;
        scanf("%d",&data);
        if (data == 0)
        {
            break;
        }
        p->data = data;
        // h = insert_Node_Tail(h,p); //尾插法
        // h = insert_Node_Head(h,p); //头插法
        h= insert_Node_Ascending(h,p); //插入后链表呈升序

    }

    print_All_Node(h);


    // printf("\nPrepare to delete:");
    // scanf("%d",&data);
    // h = delete_All_X_Node(h,data);
    // print_All_Node(h);

    system("pause");

    return 0;
}
