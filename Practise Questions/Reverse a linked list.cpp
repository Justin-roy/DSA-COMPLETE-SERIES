#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* link;
    Node(int t)
    {
      data = t;
      link = NULL;
    }
protected:
private:
};
void CreateNode(Node *&head,int val)
{
   Node *temp = new Node(val);
   if(head==NULL)
    head = temp;
   else{
    Node *t = head;
    while(t->link != NULL)
      t = t->link;
    t->link = temp;
   }
}
void Display(Node *t)
{
   while(t)
   {
     cout<<t->data<<" -> ";
     t = t->link;
   }cout<<"NULL"<<endl;
}

void RecursionReverse(Node*&head,Node *curr,Node *prev)
{
   if(curr == NULL)
   {
      head = prev;
      return;
   }
   // Calling Recursion Moving One Forward
   RecursionReverse(head,curr->link,curr);
   curr->link = prev;
}

void ReverseLL(Node *&head)
{
    Node *t = head;
    Node *prev = NULL;
    Node *curr = head;
    RecursionReverse(head,curr,prev);
//    Node *Forward = NULL;
//    while(curr){
//      Forward = curr->link;
//      curr->link = prev;
//      prev = curr;
//      curr = Forward;
//    }
//    head = prev;
}
int main()
{
  Node *head = NULL;
  CreateNode(head,1);
  CreateNode(head,2);
  CreateNode(head,3);
  CreateNode(head,4);
  CreateNode(head,5);
  Display(head);
  ReverseLL(head);
  Display(head);
return 0;
}
