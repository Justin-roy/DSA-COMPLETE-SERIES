#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
public:
    //Creating a constructor.
    //Constructor is a special member function with same name as of the class.
    //It is used to initialize the objects of its class.
    //It is automatically invoked whenever an object is created.
    //(Invoked --> call karna means Execute karna).
    Complex(void);//constructor declaration.
    void Printdata()
    {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void)//This is called default constructor as it accept no parameters.......
                         //It execute without function call because same class name...
{                          // If u change Class/Constructor it Give u Garbage value.........
    a = 1;                   //If u create constructor Ignore Return type....
    b = 5;
}
int main()
{
    Complex si;
    si.Printdata();
return 0;
}
