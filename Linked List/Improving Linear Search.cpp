#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
protected:
private:
}*First=NULL;

void Create(int A[],int n)
{
    Node *t,*s;
    First = new Node;
    First->data = A[0];
    First->next = 0;
    t = First;
    for(int i=1;i<n;i++)
    {
        s = new Node;
        s->data=A[i];
        s->next=NULL;
        t->next=s;
        t=s;
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
Node* LinearSearch(Node *p,int k)
{
    Node *q = NULL;
    while(p)
    {
        if(k==p->data)
        {
          q->next = p->next;
          p->next = First;
          First = p;
          return (p);
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
int main()
{
    Node *t;
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
    cout<<"Enter Element You Want to Find: ";
    cin>>k;
    t = LinearSearch(First,k);
    cout<<"Key Found: "<<t->data<<endl;
    Display(First);
return 0;
}
