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
    Node *t,*s;
    head = new Node();
    head->data = A[0];
    head->link = 0;
    t = head; // Address of Head Pointer
    for(int i=1;i<n;i++)
    {
        s = new Node();
        s->data = A[i];
        s->link = NULL;
        t->link = s;
        t = s;
    }
}
Node * Search(Node *s,int k)
{
    while(s)
    {
        if(s->data == k)
            return (s);
        s = s->link;
    }
    return NULL;
}
Node * Recursive_Approch(Node *h,int key)
{
    if(h==NULL)
        return NULL;
    if(key == h->data)
        return h;
    return Recursive_Approch(h->link,key);
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Create(A,n);
    int key;
    cout<<"Enter Element You Want to Found: ";
    cin>>key;
    cout<<Search(head,key)<<endl;
    cout<<Recursive_Approch(head,key)<<endl;
return 0;
}

