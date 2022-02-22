#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;
public:
    void setdata(int v1,int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(Complex o1,Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void Printdata()
    {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
protected:
private:
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(1,2);
    c1.Printdata();

    c2.setdata(4,5);
    c2.Printdata();

    c3.getdata(c1,c2);
    c3.Printdata();
return 0;
}
