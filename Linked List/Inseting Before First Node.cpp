#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is Constant O(1)
class Node
{
public:
    int data;
    Node *link;
protected:
private:
}*first=NULL;
void Create(int A[],int n)
{
    Node *r,*e;
    first = new Node;
    first->data=A[0];
    first->link=0;
    r=first;
    for(int i=1;i<n;i++)
    {
        e = new Node;
        e->data=A[i];
        e->link=NULL;
        r->link=e;
        r=e;
    }
}
void Insert_at_beg(Node *f,int k)
{
    f = new Node;
    f->data=k;
    f->link=first;
    first=f;
}
void display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        display(p->link);
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
    int k;
    cout<<"Enter Element You Want Insert at Beginning: ";
    cin>>k;
    Insert_at_beg(first,k);
    display(first);
return 0;
}
