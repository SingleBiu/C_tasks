/*
 * @Author: SingleBiu
 * @Date: 2021-06-30 11:26:20
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-06-30 20:29:02
 * @Description: file content
 */
#include"LinkedList.h"

#include<stdio.h>
#include<stdlib.h>


// 递归插入
Node *insert(Node *h,Node *p)
{
    if (h == NULL)
    {
        return p;
    }
    
    if (p == NULL)
    {
        return h;
    }

    if (p->data <= h->data)
    {
        p->next = h;
        return p;
    }
    else
    {
        h->next = insert(h->next,p);
        return h;
    }    
}

Node *insert_v2(Node *h,Node *p)
{
    if (h == NULL)
    {
        return p;
    }

    if (p == NULL)
    {
        return h;
    }
    
    
    Node *pk=h;     //pk指向链表中值比p大的结点
    Node *pr= NULL; //pr指向pk1的前驱结点

    while (pk)
    {
        if (pk->data >= p->data)
        {
            //找到了
            break;
        }
        
        pr = pk;
        pk = pk->next;
        
    }
    
    //没找到 pk==NULL
    if (pk == NULL)
    {
        pr->next = p;
        p->next = NULL;
    }
    else
    {
        if (pk == h)
        {
            p->next = pk;
            h = p;
        }
        else
        {
            p->next = pk;
            pr->next = p;
        }
    }
    
    return h;

}

// 删除链表中所有值为x的结点
Node *delete_X(Node *h,ELemType x)
{
    if (h == NULL)
    {
        return NULL;
    }
    
    Node *px = h;       //px指向要删除的结点
    Node *pr = NULL;    //px的前驱结点
    Node *ps = h;    //px每次搜索开始的结点

    while (1)
    {
        px = ps;
        while (px)
        {
            if (px->data == x)
            {
                break;
            }

            pr = px;
            px = px->next;
        }
        
        if (px == NULL)
        {
            return h;
        }
        
        ps = px->next;  //下一次搜索的起点是即将要删除结点的下一个

        if (px == h)
        {
            h = px->next;
            px->next = NULL;
            free(px);
        }
        else
        {
            pr->next = px->next;
            px->next = NULL;
            free(px);
        }
        
    }
}

void print_Node(Node *h)
{
    Node *p = h;
    while (p)
    {
        printf("(%d)->",p->data);
        p = p->next;
    }
    printf("NULL\n");
}

//作业1  一个有正有负的链表，负数放前面，正数放后面
Node *move(Node *h)
{
    Node *pr,*pk = NULL;
    Node *last,*tmp  = NULL;
    // h中没有结点
    if (h == NULL)
    {
        return NULL;
    }
    // h中只有一个结点
    if (h->next == NULL)
    {
        return h;
    }
    // h中有两个及以上结点
    last= h;
    while (last)
    {
        last = last->next;
    }
    // 跳出循环时 last指向h中最后一个结点
    tmp = h;
    while (1)
    {
        pk = tmp;
        while (pk <= 0)
        {
            // 找到第一个正数
            pr = pk;
            pk = pk->next;
        }
        //下次查找时从pk的下一位开始查找
        tmp = pk->next;
        if (tmp == NULL)
        {
            //pk的下一位为空 跳出循环
            return h;
        }
        // 否则 pr指向pk的下一位
        pr->next = pk->next;
        // last 指向pk
        last = pk;
        pk->next = NULL;
    }
}

// 作业2  就地逆置一个单链表
Node *reverse_Node(Node *h)
{
    // 传入的链表拥有少于两个结点
    if (h == NULL || h->next == NULL)
    {
        return NULL;
    }

    Node *pr=NULL,*pk = h;
    
    while (pk != NULL)
    {
        Node *tmp = pk;
        pk = pk->next;
        tmp->next = pr;
        pr = tmp;
    }


    return pr;
}

