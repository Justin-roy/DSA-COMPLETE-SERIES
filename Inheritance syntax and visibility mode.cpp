#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Base Class..........              *******************( : Colon )*********************
class Employee
{
public:
    int id;
    float salary;
    Employee(){}
    Employee(int a){
        id = a;
        salary = 5000.54;
    }
protected:
private:
};
//Derived Class syntax
/*
class ((derived-class-name)) : ((visibility-mode)) ((base-class-name))
{
        class members/methods/etc....
}
Note:
1. Default visibility mode is private.
2. Public visibility mode: Public members of the base class becomes Public members of the derived class.
3. Private visibility mode: Public members of the base class becomes Private members of the derived class.
4. Private members are never inherited.
*/
class Programmer : public Employee
{
public:
    Programmer(int a){
        id = a;
    }
    int CodingPractiseTime = 9;
    void getdata()
    {
        cout<<id<<endl;
    }
protected:
private:
};

int main()
{
    Employee roy(7), david(8);
    cout<<roy.id<<endl;
    cout<<roy.salary<<endl;

    Programmer Justin(6);
    cout<<Justin.CodingPractiseTime<<" Hrs."<<endl;
    Justin.getdata();
return 0;
}
