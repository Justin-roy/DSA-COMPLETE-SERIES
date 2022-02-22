#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *link;
protected:
private:
}*head=NULL,*tail=NULL;
void Insertion(Node *p,int n)
{
    Node *newNode = new Node;
    if(head==0)
    {
       head = tail = newNode;
       head->data = n;
       head->link = head;
       head->prev = head;
    }
    else{
        tail->link = newNode;
        newNode->data = n;
        newNode->prev = tail;
        newNode->link = head;
        head->prev = newNode;
        tail = newNode;
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

int main()
{
    int n;
    cout<<"How Many Element You Want to Insert: ";
    cin>>n;
    int i=1;
    while(n){
    int ele;
    cout<<"Enter "<<i++<<" Element: ";
    cin>>ele;
    Insertion(head,ele);
    --n;
    }
    Display(head);
return 0;
}
