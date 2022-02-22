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
}*head;
void Create(int A[],int n)
{
    Node *t,*last;
    head = new Node;
    head->data = A[0];
    head->link = head;
    last = head;
    for(int i=1;i<n;i++)
    {
       t = new Node;
       t->data=A[i];
       t->link = last->link;
       //cout<<"t->link = last->link: "<<last->link<<endl;
       last->link = t;
       //cout<<"last->link = t: "<<last->link<<endl;
       last = t;
    }
}
void Insertion(Node *p,int pos,int ele,int n)
{
    if(pos>n)
    {
        cout<<"\n\t\tInsertion Is Not Possible..\n\n\t";
        system("pause>0");
        exit(0);
    }
     Node *t;
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
     else
     {
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
void Display(Node *p)
{
   do
   {
      cout<<p->data<<" ";
      p = p->link;
   } while (p!=head);
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
    int pos,ele;
    cout<<"Enter the Index Position(0 to "<<n<<"): ";
    cin>>pos;
    cout<<"Enter the Element You Want to Insert: ";
    cin>>ele;
    Insertion(head,pos,ele,n);
    Display(head);
return 0;
}
