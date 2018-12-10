//
//  main.cpp
//  addTwoNumLinkedlist
//
//  Created by 刘桐 on 10/12/2018.
//  Copyright © 2018 Liu Tong. All rights reserved.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* addTwoNum(ListNode* l1, ListNode* l2)
{
    
    ListNode* p = l1;
    ListNode* q = l2;
    
    ListNode* newHead = new ListNode;
    ListNode* pend = newHead;
    
    int carry = 0;
    
    while(p!=NULL || q!=NULL )
    {
        ListNode* newNode = new ListNode;
        int value = 0;
        int x = (p!=NULL)? p->val:0;
        int y = (q!=NULL)? q->val:0;
        value = x+y+carry;
        
        if(value>=10)
        {
            value=value%10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        
        newNode->val =value;
        newNode->next = NULL;
        pend->next = newNode;
        pend = newNode;
        
        if(p!=NULL)
        {
            p=p->next;
        }
        if(q!=NULL)
        {
            q=q->next;
        }
        
    }
    if(carry==1)
    {
        ListNode* last = new ListNode;
        last->val = 1;
        last->next = NULL;
        pend->next = last;
    }
    return newHead->next;
    
}

int main()
{
    return 0;
}
