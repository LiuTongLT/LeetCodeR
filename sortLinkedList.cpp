//
//  sortLinkedList.cpp
//  
//
//  Created by 刘桐 on 09/12/2018.
//
#include <iostream>
#include <utility>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* quickSort(ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    qSort(head,NULL);
    return head;
    
}

void qSort(ListNode* head, ListNode* tail)
{
    if(head!=tail && head->next!=tail)
    {
        ListNode* mid = partitionSort(head,tail);
        qSort(head,mid);
        qSort(mid->next,tail);
    }
}

ListNode* partitionSort(ListNode* low, ListNode* high)
{
    int key = low->val;
    ListNode* location = low;
    
    for(ListNode* i = low->next;i!=high;i=i->next)
    {
        if(i->val<key)
        {
            location = location->next;
            swap(location->val,i->val);
        }
    }
    swap(location->val,low->val);
    return location;
}

ListNode* sort(ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    ListNode* nstart = new ListNode;
    nstart->next = head;
    ListNode* nend = head;
    ListNode* n = head->next;
    
    while(n!=NULL)
    {
        ListNode* tem = new ListNode;
        tem = head;
        ListNode* pre = new ListNode;
        pre = nstart;
        
        while(tem!=n && n->val > tem->val)
        {
            tem = tem->next;
            pre = pre ->next;
        }
        if(tem==n)
        {
            nend = n;
        }
        else
        {
            pre->next = n;
            nend->next = n->next;
            n->next = tem;
        }
        n = n->next;
    }
    head = nstart->next;
    delete nstart;
    return head;
}

int main()
{
    ListNode* head = NULL;
    for(int i = 0; i<5;i++)
    {
        ListNode* newNode = new ListNode;
        newNode->val = i;
        newNode->next = head;
        head = newNode;
    }
    for(new ListNode* l = head;l!=NULL;l=l->next)
    {
        cout<<
    }
    return 0;
}
