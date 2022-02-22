#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
A --> B
A --> C

B --> D
C --> D
*/
class A
{
public:
    int a;
    A()//constructor
    {
        cout<<"Hello A"<<endl;
    }
protected:
private:
};
class B : virtual public A
{
public:
protected:
private:
};
class C : virtual public A
{
public:
protected:
private:
};
class D : public B, public C
{
public:

protected:
private:
};

int main()
{
    D b;
    b.a;
return 0;
}
