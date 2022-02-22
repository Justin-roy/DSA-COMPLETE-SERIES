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
}*head=0;
void Create(int A[],int n)
{
    Node *r,*s;
    head = new Node;
    head->data = A[0];
    head->link = 0;
    r = head;
    for(int i=1;i<n;i++)//Remember Loop start from 1
    {
        s = new Node;
        s->data = A[i];
        s->link = NULL;
        r->link = s;
        r = s;
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
void RDisplay(Node *e)
{
    if(e)
    {
        RDisplay(e->link);
        cout<<e->data<<" ";
    }
}
int Sum(Node *u)
{
    if(u==NULL)
        return 0;
    else
    return Sum(u->link) + u->data;
}
void Sort(Node *s)
{

}
void Search(Node *se,int k)
{
    int Flag=0;
    while(se)
    {
        if(k==se->data)
            Flag=1;
        se = se->link;
    }
    if(Flag==1)
    cout<<"Key is Found";
    else
    cout<<"Key is Not Found";
}
void Max(Node *h)
{
    int mi = INT_MIN;
    while(h)
    {
        if(h->data>mi)
            mi = h->data;
        h = h->link;
    }
    cout<<"Maximum Number is: "<<mi<<endl;
}
void Min(Node *h)
{
    int ma = INT_MAX;
    while(h)
    {
        if(h->data<ma)
            ma = h->data;
         h = h->link;
    }
    cout<<"Minimum Number is: "<<ma<<endl;
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
    int ch;
    do{
    cout<<"\n1. Display a Linked List"<<endl;
    cout<<"2. Reverse a Linked List"<<endl;
    cout<<"3. Total Sum of a Linked List"<<endl;
    cout<<"4. Sort a Linked List"<<endl;
    cout<<"5. Search a Linked List"<<endl;
    cout<<"6. Find Max in a Linked List"<<endl;
    cout<<"7. Find Min in a Linked List"<<endl;
    cout<<"8. Exit"<<endl;
    cout<<"\nEnter Your Choice: ";
    cin>>ch;
    system("cls");
    switch (ch)
    {
    case 1:Display(head);
        break;
    case 2:RDisplay(head);
        break;
    case 3:cout<<"Total Sum: "<<Sum(head)<<endl;
        break;
    case 4:Sort(head);
        break;
    case 5:int key;
           cout<<"Enter Element You Want to Find: ";
           cin>>key;
           Search(head,key);
        break;
    case 6:Max(head);
        break;
    case 7:Min(head);
        break;
    }
    }while(ch!=8);
return 0;
}
