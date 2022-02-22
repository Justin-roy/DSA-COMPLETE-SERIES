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
void Search(Node *s,int k)
{
    int Flag = 0;
    while(s)
    {
        if(s->data == k)
            Flag=1;
        s = s->link;
    }
    if(Flag==1)
        cout<<"Found";
    else
    cout<<"Note Found";
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
    Search(head,key);
return 0;
}
