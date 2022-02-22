#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BASE
{
public:
    int data1;
   virtual void Display() // U write virtual then he can not display..........
    {
        cout<<"Base1 class Called "<<data1<<endl;
    }
protected:
private:
};
class DERIVED : public BASE
{
public:
    int data2 = 5;
   void Display()
    {
        cout<<"Derived class Called "<<data2<<endl;
        cout<<"Base2 class Called "<<data1<<endl;
    }
protected:
private:
};

int main()
{
    BASE * base_class_pointer;
    BASE obj1;
    DERIVED obj2;
    base_class_pointer = &obj2; // Pointing base class pointer to derived class
    base_class_pointer->data1 = 54;
    base_class_pointer->Display();
return 0;
}
