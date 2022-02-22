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
  Node *t,*r;
  head = new Node;
  head->data = A[0];
  head->link = NULL;
  t = head;
  for(int i=1;i<n;i++)
  {
    r = new Node;
    r->data = A[i];
    r->link = 0;
    t->link = r;
    t = r;
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
void Find_Middle(Node *p)
{
    Node *q = head;
    while(q)
    {
        q = q->link;
        if(q)
        q = q->link;
        if(q)
        p = p->link;
    }
    //cout<<"Middle One is: "<<p->data<<" "<<p->link->data;
    cout<<"Middle One is: "<<p->data;
}
Node * Find_Middle2(Node *p)
{
    Node *q = head;
    while(q)
    {
        q = q->link;
        if(q)
        q = q->link;
        if(q)
        p = p->link;
    }
   return p;
}
void Find_Middle3(Node *p)
{
    int Counter=0;
    while(p)
    {
        p = p->link;
        Counter++;
    }
    p = head;
    int n = Counter;
    if(n%2==0){
    for(int i=0;i<(n-1)/2;i++)
      p = p->link;
      cout<<p->data;
    }
    else{
    for(int i=0;i<n/2;i++)
      p = p->link;
      cout<<p->data;
    }
}
int main()
{
    Node *t;
    int n;
    cout<<"Enter the Size of the Linked List: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Create(A,n);
    //Find_Middle(head);
//    t = Find_Middle2(head);
//    cout<<"Middle One is: "<<t->data;
     Find_Middle3(head);
    //Display(head);
return 0;
}
