#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex(int,int);//constructor declaration.
    void Printdata()
    {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x, int y)//This is a Parameterized constructor as it takes two    parameters.
{
    a = x;
    b = y;
}
int main()
{
    //Implicit call
    Complex si(4,6);
    si.Printdata();
    //Explicit call
    Complex i = Complex(8,3);
    i.Printdata();
return 0;
}

