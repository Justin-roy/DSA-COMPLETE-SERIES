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
void Insert_At_head(int n)
{
    Node *t = new Node;
    t->data = n;
    t->prev = 0;
    t->next = head;
    head->prev = t;
    head = t;
}
void Insert_At_Position(Node *p,int pos,int ele)
{
    Node *t;
    for(int i=0;i<pos-1;i++)
    {
       p = p->next;
    }
     t = new Node;
     t->data = ele;
     t->next = p->next;
     t->prev = p;
     if(p->next)
     p->next->prev = t;
     p->next = t;
}
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->next);
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
    //Insert_At_head(7);
    int pos,ele;
    cout<<"Enter the Index Position: ";
    cin>>pos;
    cout<<"Enter Element You Want To Insert: ";
    cin>>ele;
    Insert_At_Position(head,pos,ele);
    Display(head);
return 0;
}
