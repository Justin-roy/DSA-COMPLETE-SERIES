#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
    Node(int val)
    {
      data = val;
      link = NULL;
    }
protected:
private:
};
void Insert(Node* &head,int v)
{
    Node *n = new Node(v);
    if(head==NULL)
        head = n;
    else
    {
        Node *t = head;
        while(t->link!=NULL)
        {
            t = t->link;
        }
        t->link = n;
    }
}
// Position = 3
//   1    2    3     7  NULL
//                   t
void Make_Cycle(Node * &head, int pos)
{
    Node *t = head;
    Node *stat;
    int coutn = 1;//4
    while(t->link!=0)
    {
        if(coutn==pos)
            stat = t;//stat is Now Pointing on t
        t = t->link;
      coutn++;
    }
    t->link = stat;
}
bool Detect(Node * &head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast && fast->link!=0)
    {
        slow = slow->link;
        fast = fast->link->link;
        if(fast==slow)
            return true;
    }
    return false;
}
void Remove_Cycle(Node * &head)
{
    Node *slow = head;
    Node *fast = head;
    do
    {
       slow = slow->link;
      fast = fast->link->link;
    } while(slow!=fast);
    fast = head;
    while(fast->link!=slow->link)
    {
       slow = slow->link;
       fast = fast->link;
    }
    slow->link = NULL;
}
void Display(Node *t)
{
    if(t)
    {
        cout<<t->data<<" ";
        Display(t->link);
    }
}
int main()
{
    Node *head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    Insert(head,4);
    Make_Cycle(head,3);
 (Detect(head)) ? cout<<"Loop"<<endl : cout<<"No loop"<<endl;
   Remove_Cycle(head);
 (Detect(head)) ? cout<<"Loop"<<endl : cout<<"No loop"<<endl;
   Display(head);
return 0;
}

