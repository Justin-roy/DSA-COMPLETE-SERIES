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
void Delete_At_head()
{
    Node *t = head;
    int x = head->data;
    head = head->next;
    if(head)
    head->prev = NULL;
    cout<<"Deleted Element is: "<<x<<endl;
    delete t;
}
void Delete_At_Position(Node *p,int pos,int n)
{
    Node *t;
    if(pos<=0 || pos>n)
    {
        cout<<"Deletion is Not Possible";
        system("pause>0");
        exit(0);
    }
    if(pos==1)
    Delete_At_head();
    else
    {
    for(int i=0;i<pos-1;i++)
    {
       p = p->next;
    }
    t = p;
    p->prev->next = p->next;
    if(p->next)
    p->next->prev = p->prev;
    int x = p->data;
    cout<<"Deleted Element is: "<<x<<endl;
    delete t;
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
    int pos;
    cout<<"Enter the Index Position(1 to "<<n<<"): ";
    cin>>pos;
    Delete_At_Position(head,pos,n);
    Display(head);
return 0;
}
