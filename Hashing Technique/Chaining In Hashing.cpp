#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
    Node(int E)
    {
       data = E;
       link = NULL;
    }
protected:
private:
};
void SortedInsert(Node **H,int x)
{
    Node *t,*q=NULL,*p=*H;
    t = new Node(x);

    if(*H==NULL){
      *H=t;
    }

    else{
    while(p && p->data<x)//Checking Elements....
    {
        q=p;
        p=p->link;
    }
    if(p==*H)//If Elements are Same....
    {
        t->link=*H;
        *H=t;
    }
    else//Other wise Inserting Here...
    {
        t->link=q->link;
        q->link=t;
    }
}

}
int Hash(int key)
{
   return key%10;
}
void Insert(Node *H[],int key)
{
    int index = Hash(key);
    SortedInsert(&H[index],key);
}
Node *Search(Node *p,int key)
{
    while(p!=NULL)
    {
      if(key==p->data)
      {
      return p;
      }
      p=p->link;
    }
      return NULL;
}
int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;

    for(i=0;i<10;i++)
    HT[i]=NULL;

    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,42);
    temp=Search(HT[Hash(21)],21);
    if(temp)
      cout<<temp->data<<endl;
    else
      cout<<"Element Not Found\n";
return 0;
}
