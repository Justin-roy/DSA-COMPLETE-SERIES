#include <iostream>
using namespace std;
class A
{
public:
   int a = 10;
   int b = 20;
   //Default Constructor
   A()
   {
     cout<<"Sum of a and b is: "<<a+b<<endl;
   }
};
class Copy
{
public:
   int a;
   int b;
   //Default Constructor
   Copy()
   {
     cout<<"Default Constructor Called"<<endl;
   }
   //Copy Constructor
    Copy(Copy& c){
      this->a = c.a;
      this->b = c.b;
    }
    void Print()
    {
     cout<<"Sum of a and b is: "<<a+b<<endl;
    }
};

int main()
{
    Copy c;
    c.a = 10;
    c.b = 20;
    //without calling copy constructor
    Copy cc(c);
    cc.Print();
return 0;
}
