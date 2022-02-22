#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int Top;
    int Size;
    int *A;
protected:
private:
};
void Push(Stack *t,int n)
{
    if(t->Top == t->Size-1)
    {
        cout<<"Stack OverFlow";
    }
    else
    {
       t->Top++;
       t->A[t->Top] = n;
    }
}
void Display(Stack st)
{
    cout<<"Displaying Stack Elements: ";
    for(int i=st.Top;i>=0;i--)
    {
       cout<<st.A[i]<<" ";
    }
    cout<<endl;
}
int Pop(Stack *st)
{
    int x;
    if(st->Top==-1)
    {
      return 0;
    }
    else
    {
      x = st->A[st->Top];
      st->Top--;
      st->Size--;
    }
    return x;
}
int Stack_Top(Stack st)
{
    int x;
    if(st.Top==-1){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    else
        x = st.A[st.Top];
    return x;
}
int Peek(Stack st,int p)
{
    int x;
    if(p>st.Size || p<0)
    {
       cout<<"Invalid Position"<<endl;
       return 0;
    }
    else
        x = st.A[st.Top-p+1];
    return x;
}
int main()
{
    Stack t;
    cout<<"Enter the Size of the Stack: ";
    cin>>t.Size;
    t.A = new int[t.Size];
    t.Top = -1;
    Push(&t,5);
    Push(&t,7);
    Push(&t,6);
    Push(&t,10);
    Display(t);
    cout<<Pop(&t)<<endl;
    Display(t);
    cout<<"Stack Top Element: "<<Stack_Top(t)<<endl;
    int pos;
    cout<<"Enter the Stack Position(1 to "<<t.Size<<"): ";
    cin>>pos;
    cout<<Peek(t,pos);
return 0;
}
