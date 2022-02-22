#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Second;
class First
{
public:
    int a;
public:
    friend void sumdata(First,Second);
    void setdata()
    {
        cout<<"Enter the Id Number: ";
        cin>>a;
    }
    void Getdata()
    {
        cout<<"The id of the employee is: "<<a;
    }
protected:
private:
};
class Second
{
public:
    int b;
public:
    friend void sumdata(First,Second);
    void setdata1(int a)
    {
        //cin >> salary;
        b = a;
    }
    void getdata1()
    {
    cout << "the salary of the employee is " << b << endl;
    }
protected:
private:
};
int main()
{
    First fi;
    fi.setdata();
    fi.Getdata();
    Second se;
    se.setdata1(1500);
    se.getdata1();
return 0;
}
