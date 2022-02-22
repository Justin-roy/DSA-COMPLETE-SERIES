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
}*head=NULL;
void Create(int A[],int n)
{
    Node *t,*s;
    head = new Node;
    head->data = A[0];
    head->link = head;
    t = head;
    for(int i=1;i<n;i++)
    {
      s = new Node;
      s->data = A[i];
      s->link = t->link;
      t->link = s;
      t = s;
    }
}
void Display(Node *t)
{
    do
    {
       cout<<t->data<<" ";
       t = t->link;
    } while (t!=head);
}
void Insertion(Node *p,int ele,int pos,int n)
{
    Node *t;
    if(pos>n)
    {
        cout<<"Insertion Is Not Possible..";
        system("pause>0");
        exit(0);
    }
    if(pos==0)
    {
        if(head==NULL)
         {
             t = new Node;
             t->data = ele;
             head = t;
             head->link = head;
         }
         else{
         t = new Node;
         t->data = ele;
         t->link = head;
         while(p->link!=head)
         {
             p = p->link;
         }
         p->link = t;
         head = t;
         }
    }
    else{
    for(int i=0;i<pos-1;i++)
    {
       p = p->link;
    }
    t = new Node;
    t->data = ele;
    t->link = p->link;
    p->link = t;
    }
}
void Deletion(Node *p,int idx,int n)
{
    Node *t;
    if(idx>n)
    {
        cout<<"Deletion Is Not Possible..";
        system("pause>0");
        exit(0);
    }
    if(idx==1)
    {
      t = head;
     while(p->link!=head)
      {
        p = p->link;
      }
      p->link = head->link;
      delete t;
      head = p->link;
    }
    else{
    for(int i=0;i<idx-2;i++)
    {
        p = p->link;
    }
    t = p->link;
    t->link = p->link;
    p->link = t;
    delete t;
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
    int ch;
    do{
            cout<<"\n\t\tNode Created\t\n\n";
    cout<<"1. Display A Circular Linked list"<<endl;
    cout<<"2. Insertion In A Circular Linked List"<<endl;
    cout<<"3. Deletion In A Circular Linked List"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;
    system("cls");
    switch (ch)
    {
    case 1:Display(head);
        break;
    case 2:int pos,ele;
        cout<<"Enter Element You Want to Insert: ";
        cin>>ele;
        cout<<"Enter Index Position To Insert(0 to "<<n<<"): ";
        cin>>pos;
        Insertion(head,ele,pos,n);
        break;
    case 3:int idx;
        cout<<"Enter Index Position To Insert(1 to "<<n<<"): ";
        cin>>idx;
        Deletion(head,idx,n);
        break;
    }
    }while(ch!=4);
    cout<<"\n\t\tGood Bye...\t\n\n";
    system("pause>0");
return 0;
}
