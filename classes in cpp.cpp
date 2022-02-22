#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
private:
    int a,b,c;
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee justin;
    //justin.a=7; --> This will throw error as a is private
    justin.d=5;
    justin.e=6;
    justin.setData(1,2,3);
    justin.getData();
    return 0;
}
