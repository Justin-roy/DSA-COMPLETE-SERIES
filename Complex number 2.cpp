#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex;
class calculator
{
public:
    int add(int a,int b){
    return (a+b);
    }
    int sumRealcomplex(Complex,Complex);
    int sumImaginarycomplex(Complex,Complex);
};
class Complex
{
    int a,b;
public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    //friend int calculator :: sumRealcomplex(Complex ,Complex );
    //friend int calculator :: sumImaginarycomplex(Complex ,Complex );
    //You can also write ......
    friend class calculator; // This is called friend classes......
    void Printdata()
    {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator :: sumRealcomplex(Complex b1,Complex b2)
{
    return (b1.a + b2.a);
}
int calculator :: sumImaginarycomplex(Complex b1,Complex b2)
{
    return (b1.b + b2.b);
}
int main()
{
    Complex c1,c2,get;
    c1.setdata(1,5);
    c1.Printdata();
    c2.setdata(6,4);
    c2.Printdata();
    calculator calc,calc2;
    int rel = calc.sumRealcomplex(c1,c2);
    int img = calc2.sumImaginarycomplex(c1,c2);
    cout<<"The Sum of Real Part is "<<rel<<endl;
    cout<<"The Sum of Imaginary Part is "<<img<<"i"<<endl;
return 0;
}

