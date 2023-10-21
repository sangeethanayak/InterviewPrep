#include<bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    ListNode* head=new ListNode(0);
    ListNode* temp=head;
    while(list1 && list2)
    {
        if(list1->val<list2->val)
        {
            temp->next=list1;
            list1=list1->next;
            temp=temp->next;
            temp->next=NULL;
        }
        else if(list1->val>=list2->val)
        {
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;
            temp->next=NULL;
        }
    }
    if(list1) temp->next=list1;
    if(list2) temp->next=list2;
    head=head->next;
    return head;
}

int main()
{
    ListNode* head1 = new ListNode(5);
    ListNode* head2 = new ListNode(1);
    head1->next = new ListNode(7);
    head1->next->next = new ListNode(9);
    head2->next = new ListNode(6);
    head2->next->next = new ListNode(8);
    
    cout<<"Initial Lists:\n";
    ListNode* cur = head1;
    while(cur!=NULL)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cur=head2;
    cout<<endl;
    while(cur!=NULL)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cout<<endl;
    
    cout<<"Final Combined List:\n";
    ListNode* sortedHead = mergeTwoLists(head1, head2);
    cur = sortedHead;
    while(cur!=NULL)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    return 0;
}