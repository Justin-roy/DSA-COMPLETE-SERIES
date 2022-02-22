#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
protected:
private:
}*head=NULL;
void Create(int A[],int n)
{
    Node *t,*r;
    head = new Node;
    head->prev = NULL;
    head->data = A[0];
    head->next = NULL;
    t = head;
    for(int i=1;i<n;i++)
    {
       r = new Node;
       r->prev = r->next = NULL;
       r->data = A[i];
       r->prev = t;
       t->next = r;
       t = r;
    }
}
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->next);
    }
}
void Reverse(Node *p)
{
    Node *temp;
    while(p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if(p && p->next==NULL)
            head = p;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Linked List: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Create(A,n);
    Reverse(head);
    Display(head);
return 0;
}

