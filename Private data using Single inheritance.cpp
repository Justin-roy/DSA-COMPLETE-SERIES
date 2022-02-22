#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctr+shift+c means COPY......
class Base
{
    int data1; // Private By default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
protected:
private:
};
void Base :: setData(void)
{
    data1=98;
    data2=20;
}
int Base :: getData1()
{
    return data1;
}
int Base :: getData2()
{
    return data2;
}

class Derived : private Base
{
    int data3;
public:
    void Process();
    void display();
protected:
private:
};
void Derived :: Process()
{
    setData();
    data3 = data2 * getData1();
}
void Derived :: display()
{
    cout<<"The Value of Data1 is: "<<getData1()<<endl;
    cout<<"The Value of Data2 is: "<<data2<<endl;
    cout<<"The Value of Data3 is: "<<data3<<endl;
}
int main()
{
    Derived cl;
   // cl.setData();
    cl.Process();
    cl.display();
return 0;
}

