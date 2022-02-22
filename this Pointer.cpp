#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;
public:
//    void setdata(int a)
//    {
//        //a = a; // Its give u garbage value......
//        this->a = a;//Now its Work.....
//    }
//
    A& setdata(int a)
    {
        //a = a; // Its give u garbage value......
        this->a = a;//Now its Work.....
        return *this;
    }
    void getdata()
    {
        cout<<"The value of A is: "<<a<<endl;
    }
protected:
private:
};

int main()
{
    // this is a keyboard is a pointer which points to the objects which invokes the member function
    A a;
    a.setdata(7).getdata();
    //a.getdata();
return 0;
}
