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
    head->link = 0;
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
void Insert_After(Node *p,int val,int data)
{
    if(val==1)
    {
      Node *temp = new Node;
      temp->data = data;
      temp->link = p;
      return;
    }
    else{
    Node *temp = new Node;
    temp->data = data;
    temp->link = NULL;
    while(p->link->data!=val)
        p = p->link;
        p = p->link;
    temp->link = p->link;
    p->link = temp;
    }
    cout<<endl;
}
void Insert_Before(Node *p,int val,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->link = NULL;
    while(p->link->data!=val)
        p = p->link;
    temp->link = p->link;
    p->link = temp;
    cout<<endl;
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
    Insert_After(head,1,9);//Insert After
    Display(head);
//    Insert_Before(head,2,9);//Insert Before
//    Display(head);
return 0;
}
