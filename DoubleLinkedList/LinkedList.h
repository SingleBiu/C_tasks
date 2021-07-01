/*
 * @Author: SingleBiu
 * @Date: 2021-07-01 18:55:21
 * @LastEditors: SingleBiu
 * @LastEditTime: 2021-07-01 19:36:42
 * @Description: 双向链表头文件
 */
#if !defined(__LINKEDLIST_H__)
#define __LINKEDLIST_H__

typedef int ElemType;

typedef struct LinkedList
{
    ElemType data;
    struct LinkedList *prev;
    struct LinkedList *next;
    
}LinkedList;

LinkedList *insert_Node_Tail(LinkedList *h,LinkedList *p);
void print_All_Node(LinkedList *h);

#endif // __LINKEDLIST_H__
