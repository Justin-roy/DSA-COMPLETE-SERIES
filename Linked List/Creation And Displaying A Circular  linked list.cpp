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
}*head;
void Create(int A[],int n)
{
    Node *t,*last;
    head = new Node;
    head->data = A[0];
    head->link = head;
    last = head;
    for(int i=1;i<n;i++)
    {
       t = new Node;
       t->data=A[i];
       t->link = last->link;
       last->link = t;
       last = t;
    }
}
void Display(Node *p)
{
   do
   {
      cout<<p->data<<" ";
      p = p->link;
   } while (p!=head);
}
void Recursive_Display(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        Recursive_Display(p->link);
    }
    flag = 0;
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
    Display(head);
    cout<<endl;
    cout<<"Recursive Display: ";
    Recursive_Display(head);
return 0;
}
