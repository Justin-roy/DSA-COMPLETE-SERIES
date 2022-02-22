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
void Insert(int pos,int k)
{
    Node *f,*p;
    if(pos==0){
    f = new Node;
    f->data=k;
    f->link=first;
    first=f;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i<pos-1 && p;i++)
        {
           p=p->link;
        }
        if(p)
        {
            f = new Node;
            f->data=k;
            f->link = p->link;
            p->link = f;
        }
    }
}
void display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        display(p->link);
    }
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
    int y=5;
    while(y){
    int pos,k;
    cout<<"Enter Linked List Position(0 to N): ";
    cin>>pos;
    cout<<"Enter Element You Want to Insert: ";
    cin>>k;
    system("cls");
    Insert(pos,k);
    display(first);
    --y;
    }
return 0;
}
