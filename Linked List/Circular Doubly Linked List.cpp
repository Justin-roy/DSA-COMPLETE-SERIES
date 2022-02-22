#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *link;
protected:
private:
}*head=NULL,*tail=NULL;
void Create(int A[],int n)
{
    Node *newNode = new Node;
    if(head==NULL){
       head = tail = newNode;
       head->data = A[0];
       head->link = head;
       head->prev = head;
    }
    else{
    for(int i=1;i<n;i++)
    {
        tail->link = newNode;
        newNode->data = A[i];
        newNode->prev = tail;
        newNode->link = head;
        head->prev = newNode;
        tail = newNode;
    }
    }
}
void Display(Node *t)
{
    do
    {
       cout<<t->data<<" ";
       t = t->link;
    } while (t!=head);
}
void Insert_At_head(int n)
{
    Node *t = new Node;
    t->data = n;
    t->prev = 0;
    t->link = head;
    head->prev = t;
    head = t;
}
void Insert_At_Position(Node *p,int pos,int ele)
{
    Node *t;
    for(int i=0;i<pos-1;i++)
    {
       p = p->link;
    }
     t = new Node;
     t->data = ele;
     t->link = p->link;
     t->prev = p;
     if(p->link)
     p->link->prev = t;
     p->link = t;
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
//    int pos,ele;
//    cout<<"Enter the Index Position: ";
//    cin>>pos;
//    cout<<"Enter Element You Want To Insert: ";
//    cin>>ele;
//    Insert_At_Position(head,pos,ele);
    Create(A,n);
    Display(head);
return 0;
}
