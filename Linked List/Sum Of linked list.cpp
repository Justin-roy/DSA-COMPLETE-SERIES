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
}*head=0;

void Create(int a[],int n)
{
    Node *t,*s;
    head = new Node();
    head->data=a[0];
    head->link=0;
    t = head;
    for(int i=1;i<n;i++)
    {
       s = new Node();
       s->data = a[i];
       s->link = NULL;
       t->link = s;
       t = s;
    }
}
void Display(Node *r)
{
    if(r)
    {
        cout<<r->data<<" ";
        Display(r->link);
    }
}
int Sum(Node *r)
{
    int sum=0;
   while(r)//(r!=NULL)
   {
     sum += r->data;
     r = r->link;
   }
   return sum;
}
int Recursion_sum(Node *r)
{
  if(r==0)
  {
      return 0;
  }
  return Recursion_sum(r->link) + r->data;
}
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    Create(A,10);
    Display(head);
    cout<<"\nSum: "<<Sum(head);
    cout<<"\nUsing Recursion Sum: "<<Recursion_sum(head);
return 0;
}
