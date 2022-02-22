#include <iostream>
#include <bits/stdc++.h>
#include <climits>
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
int Maximum(Node *p)
{
    int Minn = INT_MAX;
    while(p)
    {
        if(p->data < Minn)
           Minn = p->data;
            p = p->link;
    }
    return Minn;
}
int Using_Recursion(Node *r)
{
    int x = 0;
    if(r==0)
        return INT_MAX;
    else
    {
        x = Using_Recursion(r->link);
        if(x<r->data)
            return x;
        else
            return r->data;
    }
}
int Simple_way_Recursion(Node *p)
{
    int x=0;
    if(p==0)
        return INT_MAX;
    x = Using_Recursion(p->link);
    return (x<p->data) ? x : p->data;
}
int main()
{
    int A[10] = {10,1,2,15,20,-4,5,18,9,50};
    Create(A,10);
    //Display(head);
    cout<<"Minimum Is: "<<Maximum(head);
    cout<<"\nUsing Recursion Min: "<<Using_Recursion(head);
    cout<<"\nSimple Way Recursion Min: "<<Simple_way_Recursion(head);
return 0;
}
