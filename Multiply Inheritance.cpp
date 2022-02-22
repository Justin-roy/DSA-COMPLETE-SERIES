#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base1
{
public:
    void setdata(int r){
        base1 = r;
    }
protected:
    int base1;
private:
};
class Base2
{
public:
    void setdata1(int r){
        base2 = r;
    }
protected:
    int base2;
private:
};
class Base3
{
public:
    void setdata2(int r){
        base3 = r;
    }
protected:
    int base3;
private:
};
class Derived : public Base1, public Base2, public Base3
{
public:
    void display()
    {
        cout<<"The value of base1 is: "<<base1<<endl;
        cout<<"The value of base2 is: "<<base2<<endl;
        cout<<"The value of base3 is: "<<base3<<endl;
        cout<<"The value of base1 + base2 + base3 is: "<<base1 + base2 + base3<<endl;
    }
protected:
private:
};

int main()
{
    Derived v;
    v.setdata(7);
    v.setdata1(3);
    v.setdata2(10);
    v.display();
return 0;
}
