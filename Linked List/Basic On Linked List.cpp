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
int main()
{
    Node *s;
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
    s = first;
    cout<<s->link->data<<endl;//It's Give Second Node Data
    cout<<s->link->link->data<<endl;//It's Give Third Node Data
    cout<<"Address Of the Third Node: "<<s->link->link<<endl;
    while(s)
    {
        cout<<s->link<<" ";
        s=s->link;
    }
    cout<<endl<<first;
return 0;
}

