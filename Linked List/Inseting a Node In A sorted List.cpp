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
void Insert_In_Sorted_Node(Node *p,int x)
{
    Node *t,*q=NULL;
    t = new Node;
    t->data = x;
    t->link = NULL;
    if(first==NULL){
    first = t;
    }
    else{
    while(p && p->data<x)
    {
        q = p;
        p=p->link;
    }
    if(p==first) // If P Is Smaller
    {
        t->link = first;
        first = t;
    }
    else{
    t->link = p->link;
    p->link = t;
    }
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
//    int A[5] = {1,2,6,10,15};
//    Create(A,5);
    Insert_In_Sorted_Node(first,55);
    Insert_In_Sorted_Node(first,50);
    Display(first);
return 0;
}
