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
int Counter(Node *r)
{
    if(r==0)
        return 0;
    else
        return Counter(r->link)+1;
}
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    Create(A,10);
    Display(head);
    cout<<"\nCount: "<<Counter(head);
return 0;
}
