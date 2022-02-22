#include <iostream>
using namespace std;
class X;
class employee
{
    int id;
    int salary;
    friend class X;
public:
    void setdata()
    {
        cout << "ENTER THE ID: ";
        cin >> id;
    }
    void getdata()
    {
        cout << "The id of the employee is: " <<id<<endl;
    }
};
class X
{
public:
    void setdata1(int a)
    {
        salary = a;
    }
    void getdata1();
};

void X::getdata1()
{
    cout << "the salary of the employee is " << salary << endl;
}

int main()
{
    employee obj;
    obj.setdata();
    obj.getdata();
    X ob;
    ob.setdata1(3);
    ob.getdata1();
    return 0;
}
