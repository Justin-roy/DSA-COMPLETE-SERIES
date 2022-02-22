#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
protected:
private:
}*head=0;

void Create(int A[],int n)
{
    Node *t,*r=NULL;
    head = new Node();
    head->data=A[0];
    head->link=0;
    t=head;
    for(int i=1;i<n;i++)
    {
        r = new Node;
        r->data=A[i];
        r->link=0;
        t->link=r;
        t=r;
    }
}
void Insert_In_Sorted_List(Node *p,int n)
{
    Node *t,*q=NULL;
    t = new Node;
    t->data = n;
    t->link = 0;
    while(p && p->data<n)
    {
        q = p;
        p=p->link;
    }
    t->link = q->link;
    q->link = t;
}
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->link);
    }
}
int main()
{
    int A[5] = {1,2,6,10,15};
    Create(A,5);
    Insert_In_Sorted_List(head,3);
    Display(head);
return 0;
}
