/*
 * @Author: SingleBiu
 * @Date: 2021-06-30 11:26:06
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-06-30 15:33:31
 * @Description: file content
 */
#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

typedef int ELemType;

typedef struct node
{
    ELemType data;
    struct node *next;
}Node;

Node *insert_v2(Node *h,Node *p);
Node *insert(Node *h,Node *p);
Node *delete_X(Node *h,ELemType x);
void print_Node(Node *h);


#endif