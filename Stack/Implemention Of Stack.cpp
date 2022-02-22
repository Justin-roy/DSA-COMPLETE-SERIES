#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int Size;
    int Top;
    int *s;
protected:
private:
};
void Push(Stack *st,int x)
{
    if(st->Top == st->Size-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        st->Top++;
        st->s[st->Top] = x;
    }
}
void Display(Stack st)
{
    cout<<"Displaying Stack Elements: ";
    for(int i=st.Top;i>=0;i--)
    {
        cout<<st.s[i]<<" ";
    }
    cout<<endl;
}
int Pop(Stack *st)
{
    int x = -1;
    if(st->Top == -1)
    {
        return 0;
    }
    else
    {
        x = st->s[st->Top];
        st->Top--;
        st->Size--;
    }
    return x;
}
int Peek(Stack st,int pos)
{
       int x = -1;
      if(pos>st.Size || pos<0){
        cout<<"Invalid Position"<<endl;
        return 0;
      }
    else
        x = st.s[st.Top-pos+1];
    return x;
}
int Stack_Top(Stack st)
{
    if(st.Top==-1)
        return -1;
    else
        return st.s[st.Top];
}
int Is_Empty(Stack st)
{
     if(st.Top==-1)
        return 1;
    else
        return 0;
}
int Is_Full(Stack st)
{
    if(st.Top==st.Size-1)
        return 1;
    else
        return 0;
}
int main()
{
    Stack st;
    cout<<"Enter the Size of the Stack: ";
    cin>>st.Size;
    st.s = new int[st.Size];
    st.Top = -1;
    int x;
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
    case 1: cout<<"Push Element in Stack: ";
    cin>>x;
    Push(&st,x);
    break;
    case 2:Display(st);
    break;
    case 3:if(Pop(&st))
             cout<<"PopOut Element From the Stack"<<endl;
           else
             cout<<"Stack Underflow"<<endl;
        break;
    case 4: int pos;
    cout<<"Enter Position You Want To Found(1 to "<<st.Size<<"): ";
    cin>>pos;
    if(Peek(st,pos))
        cout<<"Element is Exist"<<endl;
    else
        cout<<"Element is Not Exist"<<endl;
        break;
    case 5:cout<<"Stack Top Element is: "<<Stack_Top(st)<<endl;
        break;
    case 6:if(Is_Empty(st))
           cout<<"Stack is Empty"<<endl;
           else
            cout<<"Stack is Not Empty\n";
        break;
    case 7:if(Is_Full(st))
           cout<<"Stack is Full\n";
           else
            cout<<"Stack is Not Full\n";
        break;
    }
    }while(ch!=8);
    cout<<"\n\t\tGood Bye Have A Great Day!\n\n";
    system("pause>0");
return 0;
}
