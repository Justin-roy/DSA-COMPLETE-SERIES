#include <iostream>
using namespace std;
class A
{
public:
    int a = 5, b = 10;
    void Display()
    {
      cout<<"Class A Called.."<<endl;
    }
};
class B : public A
{
public:
    int sum = a + b;
    void DATA()
    {
       cout<<"Sum of A and B: "<<sum<<endl;
    }
};

int main()
{
   B b;
   //Calling Class A Method From Class B
   b.Display();
   // Getting DATA From Class A
   b.DATA();
return 0;
}
