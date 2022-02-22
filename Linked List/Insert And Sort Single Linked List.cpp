#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
    Node(int d)
    {
      data = d;
      link = NULL;
    }
protected:
private:
}*head=NULL;
void Insert(int ele)
{
    Node *t = new Node(ele);
    t->link = head;
    head = t;
}
void Display(Node *p)
{
    if(p)
    {
       Display(p->link);
       cout<<p->data<<" ";
    }
}
void Sort()
{
    Node *ptr,*cpt;
    ptr = head;
    while(ptr->link!=NULL)
    {
       cpt = ptr->link;
       while(cpt!=NULL)
       {
          if(ptr->data < cpt->data)
          {
              // Swaping
              int temp = ptr->data;
              ptr->data = cpt->data;
              cpt->data = temp;
          }
          cpt = cpt->link;
       }
       ptr = ptr->link;
    }
}
int main()
{
    Insert(10);
    Insert(3);
    Insert(2);
    Insert(5);
    Insert(1);
    Insert(4);
    Insert(0);
    Insert(7);
    Display(head);
    Sort();
    cout<<endl;
    Display(head);
return 0;
}
