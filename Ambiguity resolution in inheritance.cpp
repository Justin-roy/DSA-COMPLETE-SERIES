#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout<<"How are You ?"<<endl;
    }
protected:
private:
};
class Base2
{
public:
    void greet()
    {
        cout<<"Kaise Ho ?"<<endl;
    }
protected:
private:
};
class Derived : public Base1, public Base2
{
    int a;
public:
    void greet()
    {
        Base2 :: greet();
    }
protected:
private:
};

int main()
{
    Derived b;
    b.greet();
    b.Base1 :: greet();
return 0;
}
