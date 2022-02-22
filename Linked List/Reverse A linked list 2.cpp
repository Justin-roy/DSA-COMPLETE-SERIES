#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
void Display(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->link);
    }
}
void Reverse(Node *p,int n)
{
     int *B = new int[n];//Heap
     //int B[n];
     int i=0;
     Node *q = first;
     while(q)
     {
         B[i] = q->data;
         q = q->link;
         i++;
     }
     q = p;
     i--;
     while(q)
     {
         q->data = B[i];
         q = q->link;
         i--;
     }
     delete []B;
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
    Reverse(first,n);
    Display(first);
return 0;
}


