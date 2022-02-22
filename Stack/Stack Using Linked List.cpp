#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int data;
    int Size;
    Stack *next;
protected:
private:
}*Top=NULL;
void Push(int x)
{
    Stack *t = new Stack;
    if(t==NULL)
    {
     cout<<"Stack Overflow";
    }
    else
    {
      t->data = x;
      t->next = Top;
      Top = t;
    }
}
int Pop()
{
    Stack *p;
    int x=-1;
    if(Top==NULL)
    {
        cout<<"Stack is Empty";
    }
    else
    {
        p = Top;
        Top = Top->next;
        x = p->data;
        delete p;
    }
    return x;
}
void Display()
{
    while(Top)
    {
        cout<<Top->data<<" ";
        Top = Top->next;
    }
    cout<<endl;
}
int Peek(int pos)
{
    int x = -1;
    Stack *p = Top;
    for(int i=0;p!=NULL&&i<pos-1;i++)
    {
       p = p->next;
    }
    if(p)
        return p->data;
    else
        return -1;
}
int IsEmpty()
{
    return Top ? 0 : 1;
}
int Is_Full()
{
    Stack *t = new Stack;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
int main()
{
    Stack tr;
    cout<<"Enter the Size of the Stack: ";
    cin>>tr.Size;
    int n = tr.Size;
    int ch;
    do{
    cout<<"\n\t\tStack Operations\n\t"<<endl;
    cout<<"1. Push Element in the Stack"<<endl;
    cout<<"2. Display the Stack Element"<<endl;
    cout<<"3. Pop Element From the Stack"<<endl;
    cout<<"4. Peek Element From the Stack"<<endl;
    cout<<"5. Check Stack Top Element"<<endl;
    cout<<"6. Check Stack Is Empty Or Not"<<endl;
    cout<<"7. Check Stack Is Full Or Not"<<endl;
    cout<<"8. Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;
    system("cls");
    switch (ch)
    {
    case 1:while(n)
          {
            int st;
            cout<<"Enter Stack Element: ";
            cin>>st;
            Push(st);
            --n;
          }
        break;
    case 2:Display();
        break;
    case 3:cout<<"Deleted Element is: "<<Pop()<<endl;
        break;
    case 4:int c;
    cout<<"Enter Position: ";
    cin>>c;
    cout<<Peek(c)<<endl;
        break;
    case 5:
        break;
    case 6:if(IsEmpty())
       cout<<"Stack is Not Empty"<<endl;
    else
       cout<<"Stack is Empty"<<endl;
        break;
    case 7:if(Is_Full())
           cout<<"Stack Is Full"<<endl;
           else
           cout<<"Stack Is Not Full"<<endl;
        break;
    }
    }while(ch!=8);





return 0;
}
