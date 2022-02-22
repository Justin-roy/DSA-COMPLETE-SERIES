#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Case 1:
class B: public A{
    //Order of execution of constructor --> first A() then B()
};

Case 2:
class A: public B, public C{
    //Order of execution of constructor --> B() -- C() -- A()
};

Case 3:
class A: public B, virtual public C{
    //Order of execution of constructor --> C() -- B() -- A()
};
*/
class Base1
{
    int data1;
public:
    Base1(int a)
    {
        data1 = a;
        cout<<"Base 1 Class Constructor is Called"<<endl;
    }
    void printdata1(void)
    {
        cout<<"The value of data1 is: "<<data1<<endl;
    }
protected:
private:
};
class Base2
{
int data2;
public:
    Base2(int a)
    {
        data2 = a;
        cout<<"Base 2 Class Constructor is Called"<<endl;
    }
    void printdata2(void)
    {
        cout<<"The value of data2 is: "<<data2<<endl;
    }
protected:
private:
};
class Derived : public Base1, public Base2
{
    int data3, data4;
public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b)
    {
        data3 = c;
        data4 = d;
        cout<<"Derived Class Constructor is Called"<<endl;
    }

    void printdata(void)
    {
        cout<<"The value of data3 is: "<<data3<<endl;
        cout<<"The value of data4 is: "<<data4<<endl;
    }
protected:
private:
};

int main()
{
    Derived s(4,5,6,3);
    s.printdata1();
    s.printdata2();
    s.printdata();
return 0;
}
