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
void Insertion(Node *p,int pos,int n)
{
     Node *t;
    if(pos>n)
    {
        cout<<"\n\t\tInsertion Is Not Possible..\n\n\t";
        system("pause>0");
        exit(0);
    }
     if(pos==0)
     {
          if(head==NULL)
         {
            return;
         }
        t = head;
        while(p->link!=head)
        {
            p = p->link;
        }
        p->link = head->link;
        delete t;
        head = p->link;
     }
     else
     {
     for(int i=0;i<pos-2;i++)
     {
         p = p->link;
     }
     t = p->link;
     p->link = t->link;
     delete t;
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
    cout<<"Enter the Index Position(0 to "<<n-1<<"): ";
    cin>>pos;
    Insertion(head,pos,n);
    Display(head);
return 0;
}
