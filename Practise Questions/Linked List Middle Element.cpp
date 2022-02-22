#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
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
    {
      t = t->link;
    }
    t->link = temp;
   }
}
void Display(Node* t)
{
   while(t)
   {
     cout<<t->data<<" -> ";
     t = t->link;
   }cout<<"NULL"<<endl;
}
int MiddleElements(Node *head)
{
   //Time is O(N) + O(N/2)
   //Space is O(1)
   Node *t = head;
   int count = 0;
   while(head){
    count++;
    head = head->link;
   }
   for(int i=0;i<count/2;i++)
   {
     t = t->link;
   }
   //If u want after middle All element the use
   // return t;
  return t->data;
}
int MiddleElements2(Node *head)
{
   //Time is O(N/2)
   //Space is O(1)
   Node *slow, *fast;
   slow = fast = head;
   while(fast && fast->link != NULL)
   {
      slow = slow->link;//Moving One Step
      fast = fast->link->link;//Moving Two Step
   }
   return slow->data;
}
int main()
{
    Node *head = NULL;
    CreateNode(head,1);
    CreateNode(head,2);
    CreateNode(head,3);
    CreateNode(head,4);
    CreateNode(head,5);
    CreateNode(head,5);
    Display(head);
    cout<<"Middle Element Is: ";
    cout<<MiddleElements2(head)<<endl;
return 0;
}
