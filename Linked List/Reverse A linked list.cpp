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
void Reverse(Node *p)
{
    if(p)
    {
      Reverse(p->link);
      cout<<p->data<<" ";
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
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    Reverse(first);
    cout<<endl;
    Display(first);
return 0;
}
