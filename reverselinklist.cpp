//
//  main.cpp
//  reverseLinkedList
//
//  Created by 刘桐 on 07/12/2018.
//  Copyright © 2018 Liu Tong. All rights reserved.
//
#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
  };

ListNode* reverseList(ListNode* head) {
    ListNode* pre = head;
    ListNode* tem = head->next;
    
    while(tem!=NULL)
    {
        ListNode* post = tem->next;
        if(pre == head)
        {
            pre->next = NULL;
        }
        tem->next = pre;
        
        pre = tem;
        tem = post;
        
    }
    
    return pre;
}

int main()
{
    ListNode* head = NULL;
    for(int i=0;i<5;i++)
    {
        ListNode* newNode = new ListNode;
        newNode->val = i;
        newNode->next = head;
        head = newNode;
    }
    
    ListNode* node;
    for(node=head;node!=NULL;node=node->next)
    {
        cout<<node->val<<endl;
    }
    
    ListNode* newH = reverseList(head);
    ListNode* cur = newH;
    while(cur!=NULL)
    {
        cout<<cur->val<<endl;
        cur = cur->next;
    }
    
    return 0;
}
