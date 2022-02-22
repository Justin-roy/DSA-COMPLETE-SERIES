#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Remember Always Enter Sorted Elements...
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
void Merging_Two_list(Node *p,Node *q)
{

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
    cout<<"Enter the Size of the First Linked List: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    int n1;
    cout<<"Enter the Size of the Second Linked List: ";
    cin>>n1;
    int B[n1];
    for(int i=0;i<n1;i++)
    {
       cin>>B[i];
    }
    Create2(B,n1);
    Concatinate(head,Second);
    //Merging_Two_list(head,Second);
    Display(head);
return 0;
}

