#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void fun_1()
    {
        cout<<"Base class 1"<<endl;
    }
    virtual void fun_2()
    {
        cout<<"Base class 2"<<endl;
    }
   virtual void fun_3()
    {
        cout<<"Base class 3"<<endl;
    }
protected:
private:
};
class Derived : public Base
{
public:
    void fun_1()
    {
        cout<<"Derived class 1"<<endl;
    }
    void fun_3(int x)
    {
        cout<<"Derived class 2"<<endl;
    }
    void fun_4()
    {
        cout<<"Derived class 3"<<endl;
    }
protected:
private:
};

int main()
{
   Base *p;
   Derived obj;
   p = &obj;
   p->fun_1();
   p->fun_2();
   p->fun_3();
//   p->fun_4();
return 0;
}
