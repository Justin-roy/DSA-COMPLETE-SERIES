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
}*head=0;
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
void Delete_at_any_pos(Node *s,int pos,int sizee)
{
    int n = 0;
    if(pos>sizee)
    {
        cout<<"\n\n\t\tInvalid Index\n\t\t\n";
        exit(0);
    }
    if(pos==1)
    {
        s = head;
        head=head->link;
        n = s->data;
        delete s;
        cout<<"Deleted Element is: "<<n<<endl;

    }
    else{
    s = head;
    Node *q = NULL;
    for(int i=0;i<pos-1&&s;i++)
    {
        q = s;
        s = s->link;
    }
    if(s){
    q->link = s->link;
    n = s->data;
    cout<<"Deleted Element is: "<<n<<endl;
    delete s;
    }
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
    int pos;
    cout<<"Enter Index Position To Delete (1 to "<<n<<" ): ";
    cin>>pos;
    Delete_at_any_pos(head,pos,n);
    cout<<"Displaying Elements After Deletion: ";
    Display(head);
return 0;
}
