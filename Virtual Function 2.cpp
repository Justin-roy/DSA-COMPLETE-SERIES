#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
    int data1=45;
public:
    virtual void print()
    {
        cout<<"Print Function 1 called ! "<<data1<<endl;
    }
    void Invoked()
    {
        cout<<"Class A called !"<<endl;
        this->print();
    }

protected:
private:
};
class B : public A
{
    int data2=98;
public:
    void print()
    {
        cout<<"Print Function 2 called ! "<<data2<<endl;
    }
    void Invoked()
    {
        cout<<"Class B called !"<<endl;
        this->print();
    }
protected:
private:
};

int main()
{
    A *p = new B;
    p->Invoked();
return 0;
}
