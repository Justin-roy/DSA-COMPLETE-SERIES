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
}*first=0;

void Create(int A[],int n)
{
    Node *t,*y;
    first = new Node;
    first->data=A[0];
    first->link=0;
    t = first;
    for(int i=1;i<n;i++)
    {
       y = new Node;
       y->data=A[i];
       y->link=0;
       t->link=y;
       t = y;
    }
}
void Remove_Duplicate(Node *p)
{
    Node *q = first->link;
    while(q)
    {
        if(p->data!=q->data)
        {
            p = q;
            q = q->link;
        }
        else
        {
            p->link = q->link;
            delete q;
            q = p->link;
        }
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
    Remove_Duplicate(first);
    Display(first);
return 0;
}
