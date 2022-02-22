#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    friend Complex sumdata(Complex b1,Complex b2);
    void Printdata()
    {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex sumdata(Complex b1,Complex b2)
{
    Complex b3;
    b3.setdata((b1.a+b2.a),(b1.b+b2.b));
    return b3;
}
int main()
{
    Complex c1,c2,get;
    c1.setdata(1,5);
    c1.Printdata();
    c2.setdata(6,4);
    c2.Printdata();
    get = sumdata(c1,c2);
    get.Printdata();
return 0;
}
