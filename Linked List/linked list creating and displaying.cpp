#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
protected:
private:
}*first=NULL;
void Create(int A[],int n)
{
    Node *t,*last;
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;
    cout<<"Last: "<<last<<endl;
    cout<<"Last->data: "<<last->data<<endl;
    for(int i=1;i<n;i++)
    {
       t = new Node();
       t->data=A[i];
       t->next=NULL;
       last->next = t;
       last = t;
    }
}
void Display(Node *p)
{
    int couter = 0;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
        couter++;
    }
    cout<<endl<<"Count: "<<couter;
}
void Reverse_Display(Node *p)
{
    if(p!=NULL)
    {
        Reverse_Display(p->next);
        cout<<p->data<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    system("cls");
    Create(A,n);
    Display(first);
    cout<<endl;
    Reverse_Display(first);
    delete [] first;
return 0;
}
