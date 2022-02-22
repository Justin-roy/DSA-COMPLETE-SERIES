#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
//    virtual void print()
//    {
//        cout<<"Print fun 1 is Called !"<<endl;
//    }
    virtual void print() = 0; // This is called pure function
    void show()
    {
        cout<<"Show fun 1 is Called !"<<endl;
    }
protected:
private:
};
class B : public A
{
public:
    void print()
    {
        cout<<"Print fun 2 is Called !"<<endl;
    }
    void show()
    {
        cout<<"Show fun 2 is Called !"<<endl;
    }
protected:
private:
};

int main()
{
    A *ptr;
    B der;
    ptr = &der;

    ptr->print();
    ptr->show();
return 0;
}
