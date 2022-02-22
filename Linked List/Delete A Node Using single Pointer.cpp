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
}*first=NULL;
void Create(int A[],int n)
{
    Node *p,*s;
    first = new Node;
    first->data=A[0];
    first->link=NULL;
    p = first;
    for(int i=1;i<n;i++)
    {
        s = new Node;
        s->data = A[i];
        s->link = NULL;
        p->link = s;
        p = s;
    }
}
void Delete(Node *p,int n)
{
    while(p->link->data!=n)
    {
        p = p->link;
    }
    Node *t=p->link;
    p->link = p->link->link;
    cout<<"Delete Element is: "<<t->data<<endl;
    delete t;
}
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->link);
    }
}
void Delete_First(Node *p)
{
    Node *q = first;
    first = first->link;
    cout<<"Delete Element is: "<<q->data<<endl;
    delete q;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    Delete(first,4);
    Display(first);
    cout<<endl;
    Delete_First(first);
    Display(first);
return 0;
}
