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
void Display(Node *r)
{
      if(r)
    {
        cout<<r->data<<" ";
        Display(r->link);
    }
}
void RDisplay(Node *r)
{
      if(r)
    {
        RDisplay(r->link);
        cout<<r->data<<" ";
    }
}
Node * LinearSearch(Node *p,int key)
{
   Node *q = NULL;
   while(p)
   {
       if(key==p->data)
       {
          q->link = p->link;
          p->link = first;
          first = p;
          return p;
       }
       q = p;
       p = p->link;
   }
   return NULL;
}
void Sum(Node *a)
{
    int sum=0;
    while(a)
    {
       sum += a->data;
       a = a->link;
    }
    cout<<"Total Sum Is: "<<sum;
}
void Minimum(Node *mi)
{
    int M = INT_MAX;
    while(mi)
    {
       if(mi->data < M)
       {
           M = mi->data;
       }
       mi = mi->link;
    }
    cout<<"Minimum Element Is: "<<M;
}
void Maximum(Node *mi)
{
    int M = INT_MIN;
    while(mi)
    {
       if(mi->data > M)
       {
           M = mi->data;
       }
       mi = mi->link;
    }
    cout<<"Maximum Element Is: "<<M;
}
void Insertion(Node *p,int pos,int ele)
{
     Node *t;
     if(pos==0)
     {
         t = new Node;
         t->data = ele;
         t->link = first;
         first = t;
     }
     else if(p>0)
     {
          p=first;
         for(int i=0;p&&i<pos-1;i++)
         {
             p = p->link;
         }
         if(p)
         {
             t = new Node;
             t->data = ele;
             t->link = p->link;
             p->link = t;
         }
     }
}
void Delete_at_Position(Node *p,int pos,int sizee)
{
    if(pos>sizee)
    {
        cout<<"\n\n\t\tInvalid Index\n\t\t\n";
        exit(0);
    }
    Node *q=NULL;
    int n=0;
    if(pos==1){
    p = first;
    first = first->link;
    n = p->data;
    delete p;
    cout<<"Deleted Element Is: "<<n<<endl;
    }
    else{
        p = first;
        for(int i=0;i<pos-1&&p;i++)
        {
           q = p;
           p = p->link;
        }
        if(p)
        {
            q->link = p->link;
            n = p->data;
            delete p;
           cout<<"Deleted Element Is: "<<n<<endl;
        }
    }

}
bool Check_Is_Sorted(Node *p)
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
void Sort()
{
    Node *ptr,*cpt,*last;
    ptr = first;
    while(ptr->link!=NULL)
    {
       cpt = ptr->link;
       while(cpt!=NULL)
       {
          if(ptr->data < cpt->data)
          {
              // Swapping
              int temp = ptr->data;
              ptr->data = cpt->data;
              cpt->data = temp;
          }
          cpt = cpt->link;
       }
       ptr = ptr->link;
       last = ptr;
    }
    if(first->data > last->data)
        RDisplay(first);
    else
        Display(first);
}
int main()
{
    Node *t;
    int n;
    cout<<"Enter the Size of the Linked List: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    int c;
    do
    {
    cout<<"\n\n\t Node Created Successfully \t\n\n";
    cout<<"1. Display Linked List"<<endl;
    cout<<"2. Search In a Linked List"<<endl;
    cout<<"3. Total Sum of a Linked List"<<endl;
    cout<<"4. Find Minimum In a Liked List"<<endl;
    cout<<"5. Find Maximum In a Liked List"<<endl;
    cout<<"6. Reverse a Linked List"<<endl;
    cout<<"7. Insert At Any Position In a Linked List"<<endl;
    cout<<"8. Delete At Any Position In a Linked List"<<endl;
    cout<<"9. Sort the Linked List"<<endl;
    cout<<"10. Check If Linked List Is Sorted Or Not"<<endl;
    cout<<"11. Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>c;
    system("cls");
        switch (c)
        {
        case 1:Display(first);
            break;
        case 6:RDisplay(first);
            break;
        case 2: int k;
          cout<<"Enter Elements You Want to Found: ";
          cin>>k;
          t = LinearSearch(first,k);
          if(t)
          cout<<"Key is Found "<<t->data<<endl;
          else
          cout<<"Key is Not Found";
            break;
        case 3:Sum(first);
            break;
        case 4:Minimum(first);
            break;
        case 5:Maximum(first);
            break;
        case 7:int pos,ele;
        cout<<"Enter Index Position(0 to "<<n<<"): ";
        cin>>pos;
        cout<<"Enter the Element: ";
        cin>>ele;
            Insertion(first,pos,ele);
            break;
        case 8:int del;
            cout<<"Enter Index Position You Want To Delete (1 to "<<n<<" ): ";
            cin>>del;
            Delete_at_Position(first,del,n);
            break;
        case 10:if(Check_Is_Sorted(first))
               cout<<"Linked List is Sorted"<<endl;
               else
               cout<<"Linked List is Not Sorted"<<endl;
             break;
        case 9: cout<<"Linked List is Sorted: ";
                Sort();
        }
        } while (c<11);
        cout<<"\n\n\tThanks For Using Good Bye!\t\n\n";
        system("pause>0");
return 0;
}
