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
}*First;
void Create(int A[],int n)
{
    Node *p,*s;
    First = new Node;
    First->data=A[0];
    First->next=0;
    p = First;
    for(int i=1;i<n;i++)
    {
        s = new Node;
        s->data=A[i];
        s->next=NULL;
        p->next = s;
        p = s;
    }
}
Node * LinearSearch(Node *p,int key)
{
   Node *q = NULL;
   while(p)
   {
       if(key==p->data)
       {
          q->next = p->next;
          p->next = First;
          First = p;
          return p;
       }
       q = p;
       p = p->next;
   }
   return NULL;
}
void Display(Node *t)
{
    if(t)
    {
        cout<<t->data<<" ";
        Display(t->next);
    }
}
int main()
{
    Node *t;
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
    int k;
    cout<<"Enter Elements You Want to Found: ";
    cin>>k;
    t = LinearSearch(First,k);
    if(t)
        cout<<"Key is Found "<<t->data<<endl;
    else
        cout<<"Key is Not Found";
    Display(First);
return 0;
}
