#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class S2;
class S1
{
    int num;
public:
    friend void ExchangeData(S1 &,S2 &);
    void setdata(int data)
    {
        num = data;
    }
    void display(void)
    {
        cout<<num<<endl;
    }
};
class S2
{
    int num1;
public:
    friend void ExchangeData(S1 &,S2 &);
    void setdata(int data)
    {
        num1 = data;
    }
    void display(void)
    {
        cout<<num1<<endl;
    }
};
void ExchangeData(S1 &x,S2 &y)
{
    int temp = x.num;
    x.num = y.num1;
    y.num1 = temp;
}
int main()
{
    S1 c;
    c.setdata(8);
    S2 b;
    b.setdata(6);
    cout<<"The Num value of Before Swap: ";
    c.display();
    cout<<"The Num1 value of Before Swap: ";
    b.display();
    ExchangeData(c,b);
    cout<<"The Num value of After Swap: ";
    c.display();
    cout<<"The Num1 value of After Swap: ";
    b.display();
return 0;
}
