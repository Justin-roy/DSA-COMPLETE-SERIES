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
}*head=0,*Second=0;
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
void Create2(int A[],int n)
{
    Node *U,*y;
    Second = new Node;
    Second->data = A[0];
    Second->link = 0;
    U = Second;
    for(int i=1;i<n;i++)
    {
        y = new Node;
        y->data = A[i];
        y->link = NULL;
        U->link = y;
        U = y;
    }
}
void Concatinate(Node *p,Node *q)
{
    while(p->link!=NULL)
    {
        p = p->link;
    }
    p->link = q;
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
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    int B[3] = {6,7,8};
    Create2(B,3);
    Concatinate(head,Second);
    Display(head);
return 0;
}
