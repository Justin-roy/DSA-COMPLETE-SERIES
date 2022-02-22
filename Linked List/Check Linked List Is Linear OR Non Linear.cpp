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
void Create(int A[],int n)
{
    Node *U,*y;
    head = new Node;
    head->data = A[0];
    head->link = 0;
    U = head;
    for(int i=1;i<n;i++)
    {
        y = new Node;
        y->data = A[i];
        y->link = NULL;
        U->link = y;
        U = y;
    }
}
int Check_Linear_Or_NonLinear(Node *f)
{
    Node *q,*p;
    p = q = f;
    do
    {
      p = p->link;
      q = q->link;
      (q = q) ? q->link : q;
    } while (p && q && p!=q);
   return (p==q) ? 1 : 0;
}
int main()
{
    Node *t,*t1;
    int A[5] = {1,2,3,4,5};
    Create(A,5);
    t = head->link->link;
    t1 = head->link->link->link->link;
    t1->link = t;
    if(Check_Linear_Or_NonLinear(head))
        cout<<"Loop There"<<endl;
    else
        cout<<"No Loop There"<<endl;
return 0;
}
