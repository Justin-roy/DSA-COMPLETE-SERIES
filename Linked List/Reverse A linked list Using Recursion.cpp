#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std;
class Node
{
public:
    int data;
    Node *link;
protected:
private:
}*first;
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
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->link);
    }
}
void Reverse2(Node *q,Node *p)
{
    if(p)
    {
      Reverse2(p,p->link);
      p->link = q;
    }
    else
        first = q;
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
    Reverse2(NULL,first);
    Display(first);
return 0;
}



