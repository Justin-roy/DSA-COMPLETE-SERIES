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
int main()
{
   Node* head = NULL;
   CreateNode(head,1);
   CreateNode(head,2);
   CreateNode(head,5);
   CreateNode(head,9);
   CreateNode(head,10);
   CreateNode(head,13);
   Display(head);
   Node* head2 = NULL;
   CreateNode(head2,4);
   CreateNode(head2,7);
   CreateNode(head2,11);
   CreateNode(head2,15);
   Display(head2);
   Node *t = NULL;
   t = MergeTwoLL(head,head2);
   Display(t);
return 0;
}
