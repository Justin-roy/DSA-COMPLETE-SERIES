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
}*head=NULL;
void Create(int A[],int n)
{
    Node *p,*d;
    head = new Node;
    head->data = A[0];
    head->link = NULL;
    p = head;
    for(int i=1;i<n;i++)
    {
        d = new Node;
        d->data = A[i];
        d->link = NULL;
        p->link = d;
        p = d;
    }
}
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->link);
    }
}
void Delete_head(Node *p)
{
    Node *t = head;
    head = head->link;
    delete t;
}
void Delete_Node(Node *p,int e)
{
    if(head==NULL){
        return;
    }
    if(e == 1)
    {
        Delete_head(head);
        return;
    }
    while(p->link->data!= e)
    {
        p = p->link;
    }
    Node *t = p->link;
    p->link = p->link->link;
    delete t;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    Create(A,n);
    Display(head);
    int ele;
    cout<<"\nEnter Element You Want to Delete: ";
    cin>>ele;
    Delete_Node(head,ele);
    Display(head);
return 0;
}
