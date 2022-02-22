#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *link;
    Node(int n)
    {
      val = n;
      link = NULL;
    }

};
void CreateNode(Node* &head,int n)
{
    Node *t = new Node(n);
    if(head == NULL)
        head = t;
    else{
        Node *r = head;
        while(r->link!=NULL)
            r = r->link;
       r->link = t;
    }
}
void Display(Node *t)
{
   while(t){
    cout<<t->val<<" ";
    t = t->link;
   }
}
Node * removeDuplicate(Node *head)
{
    Node *t = head;
    while(t->link != NULL)
    {
       if(t->val == t->link->val)
           t->link = t->link->link;
       else
         t = t->link; // if not equal move ahead
    }
    return head;
}
int main()
{
   Node* head = NULL;
   CreateNode(head,1);
   CreateNode(head,1);
   CreateNode(head,1);
   CreateNode(head,2);
   CreateNode(head,3);
   CreateNode(head,3);
   Display(head);
   Node * t;
   t = removeDuplicate(head);cout<<endl;
   head = t;
   Display(head);
return 0;
}
