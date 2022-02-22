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
void CreateCycle(Node *&head,int pos)
{
   Node *t = head;
   for(int i=0;i<pos;i++)
   {
     t = t->link;
   }
   while(head->link != NULL)
    head = head->link;
   head->link = t;
}
bool DetectCycle(Node *head)
{
  Node *fast,*slow;
  fast = slow = head;
  while(fast && fast->link)
  {
    slow = slow->link;
    fast = fast->link->link;
    if(fast == slow)
      return 1;
  }
  return 0;
}
int SizeOfCycle(Node *head)
{
   int Count = 0;
   Node *fast,*slow;
  fast = slow = head;
  while(fast && fast->link)
  {
    slow = slow->link;
    fast = fast->link->link;
    if(fast == slow)
    {
      while(slow)
      {
        Count++;
        slow = slow->link;
        if(fast == slow)
           return Count;
      }

    }
  }
  return Count;
}
int CycleStart(Node *head)
{
  // Time and Space is O(N)
  Node *fast,*slow;
  fast = slow = head;
  int C[10] = {0};
  while(fast && slow)
  {
     if(slow == fast){
     fast = fast->link;
     slow = slow->link;
     C[slow->data]++;
     if(C[slow->data] == 2)
        return slow->data;
     }
  }
  return 0;
}
int CycleStart2(Node *head)
{
  Node *fast,*slow;
  fast = slow = head;
  int length = 0;
  while(fast && fast->link)
  {
    slow = slow->link;
    fast = fast->link->link;
    if(fast == slow){
      length = SizeOfCycle(slow);
      break;
    }
  }
  Node *f,*s;
  f = s = head;
  while(length > 0)
  {
     s = s->link;
     length--;
  }
  while(f != s)
  {
    f = f->link;
    s = s->link;
  }
  return s->data;
}
int main()
{
    Node *head = NULL;
    CreateNode(head,1);
    CreateNode(head,2);
    CreateNode(head,3);
    CreateNode(head,4);
    CreateNode(head,5);
    CreateNode(head,6);
    Display(head);
    CreateCycle(head,3);
    cout<<"Cycle Start From: "<<CycleStart(head)<<endl;
    cout<<"Cycle Start From2: "<<CycleStart2(head)<<endl;
    cout<<"Size: "<<SizeOfCycle(head)<<endl;
    cout<<DetectCycle(head);
return 0;
}
