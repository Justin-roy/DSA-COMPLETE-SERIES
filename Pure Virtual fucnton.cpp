#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class R
{
public:
   virtual void display() = 0;//do-nothing function --> Pure Function....
protected:
private:
};

class A : public R
{
public:
    void display()
    {
        cout<<"Hello World !"<<endl;
    }
protected:
private:
};

class B : public R
{
public:
    void display()
    {
        cout<<"Hello World 2 !"<<endl;
    }
protected:
private:
};

int main()
{
    A a;
    B b;
    R *ptr[2];
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[0] ->display();
    ptr[1] ->display();
    cout<<"Press Enter to Exit"<<endl;
    cin.ignore(); //Means Exit using while pressing enter..............
return 0;
}
