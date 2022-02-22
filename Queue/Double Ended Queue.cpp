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
}*Front = -1, *Rear = -1;

void Enqueue(int x)
{
   Node *t = new Node;
   if(t==NULL)
   {
       cout<<"Queue is Full"<<endl;
   }
   else
   {
       t->data = x;
       t->link = NULL;

   }
}
int Dequeue()
{
   int x = -1;
   Node *p;
   if(Front==NULL)
    cout<<"Queue is Empty"<<endl;
   else{
    p = Front;
    Front = Front->link;
    x = p->data;
    delete p;
   }
   return x;
}
void Display()
{
    Node *p = Front;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->link;
    }
}
int main()
{
    Enqueue(5);
    Enqueue(4);
    Enqueue(3);
    Enqueue(2);
    Enqueue(1);
    Enqueue(8);
    Enqueue(9);
    cout<<Dequeue()<<endl;//Delete First Element
    Display();
return 0;
}

