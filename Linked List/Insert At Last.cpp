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
void Insert_At_Last(int n)
{
    Node *t,*last;
    t=new Node;
    t->data=n;
    t->link=NULL;
    if(head==NULL)
    {
        head=last=t;
    }
    else
    {
        last->link=t;
        last=t;
    }
}
void display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        display(p->link);
    }
}
int main()
{
    Insert_At_Last(8);
    Insert_At_Last(10);
    Insert_At_Last(12);
    display(head);
return 0;
}
