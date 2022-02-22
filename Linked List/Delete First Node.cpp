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
void Delete_at_first(Node *s)
{
    int n;
    s=head;
    head = head->link;
    n = s->data;
    cout<<"Deleted Element is: "<<n<<endl;
    delete s;
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
    int A[5] = {1,2,3,4,5};
    Create(A,5);
    Delete_at_first(head);
    cout<<"Displaying Elements After Deletion: ";
    Display(head);
return 0;
}
