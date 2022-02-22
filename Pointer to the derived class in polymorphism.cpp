#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BASE
{
public:
    int data1;
    void Display()
    {
        cout<<"Base class Called "<<data1<<endl;
    }
protected:
private:
};
class DERIVED : public BASE
{
public:
    int data2;
   void Display()
    {
        cout<<"Derived class Called "<<data2<<endl;
        cout<<"Base class Called "<<data1<<endl;
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

    DERIVED * derived_base_pointer;
    derived_base_pointer = &obj2; // If u don't address to obj2 to derived_base_pointer so the output is garbage........
    derived_base_pointer->data2 = 102;
    derived_base_pointer->Display();

return 0;
}
