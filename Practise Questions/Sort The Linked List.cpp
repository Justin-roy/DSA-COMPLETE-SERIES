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
    cout<<t->val<<" -> ";
    t = t->link;
   }
   cout<<"NULL"<<endl;
}
Node* MergeTwoLL(Node *head1,Node *head2)
{
   Node *ans = NULL;
   if(head1==NULL)
    return head2;
   if(head2==NULL)
    return head1;
   if(head1->val < head2->val)
   {
     ans = head1;
     ans->link = MergeTwoLL(head1->link,head2);
   }else{
     ans = head2;
     ans->link = MergeTwoLL(head1,head2->link);
   }
   return ans;
}
int GetCount(Node *head)
{
   int c = 0;
   while(head){
    head = head->link;
    c++;
   }
  return c;
}
Node* HalfLL(Node *head)
{
   Node* t = head;
   int Count = GetCount(head);
   for(int i=0;i<Count/2;i++)
   {
      t = t->link;
   }
  return t;
}
Node *SortLL(Node *head)
{
   if(head || head->link)
       return head;
   Node *mid = HalfLL(head);
   Node *left = SortLL(head);
   Node *right = SortLL(mid);
   return MergeTwoLL(left,right);
}
int main()
{
   Node* head = NULL;
   CreateNode(head,6);
   CreateNode(head,2);
   CreateNode(head,5);
   CreateNode(head,1);
   CreateNode(head,19);
   CreateNode(head,13);
   CreateNode(head,20);
   Node *t = SortLL(head);
   Display(t);
return 0;
}
