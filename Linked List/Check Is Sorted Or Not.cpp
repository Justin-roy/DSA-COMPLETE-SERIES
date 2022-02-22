#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
protected:
private:
}*first;
void Create(int A[],int n)
{
    Node *p,*s;
    first = new Node;
    first->data=A[0];
    first->link=NULL;
    p = first;
    for(int i=1;i<n;i++)
    {
        s = new Node;
        s->data = A[i];
        s->link = NULL;
        p->link = s;
        p = s;
    }
}
void Check_Is_Sorted(Node *p)
{
    int mi = INT_MIN;
    int Flag=1;
    while(p)
    {
        if(p->data>mi){
        mi = p->data;
        Flag=1;
        }
        else{
        //Flag=0;
        cout<<"\nLinked List Is Not Sorted"<<endl;
        exit(0);
        }
        p = p->link;
    }
    if(Flag==1)
    cout<<"\nLinked List Is Sorted"<<endl;
}
void Display(Node *r)
{
      if(r)
    {
        cout<<r->data<<" ";
        Display(r->link);
    }
}
bool Check_Is_Sorted2(Node *p)
{
    int x = INT_MIN;
    while(p)
    {
        if(p->data<x)
        return false;
        x = p->data;
        p = p->link;
    }
    return true;
}
int main()
{
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
    //Check_Is_Sorted(first);
    if(Check_Is_Sorted2(first))
    cout<<"Linked List Is Sorted"<<endl;
    else
    cout<<"Linked List Is Not Sorted"<<endl;
return 0;
}
