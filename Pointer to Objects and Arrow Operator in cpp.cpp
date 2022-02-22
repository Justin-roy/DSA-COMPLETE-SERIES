#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real,imaginary;
public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout<<"The Real Part is: "<<real<<endl;
        cout<<"The Imaginary Part is: "<<imaginary<<"i"<<endl;
    }
protected:
private:
};

int main()
{
//    Complex c1;
//    Complex *ptr = &c1;
    Complex *ptr = new Complex;
    (*ptr).setdata(5,4);
//    c1.setdata(5,4);
//    c1.getdata();
     //(*ptr).getdata();
     // Arrow Operator
     ptr->getdata();
    //Arrow Object
    Complex *ptr1 = new Complex[4];
    ptr1->setdata(7,8);
     ptr1->getdata();
return 0;
}
