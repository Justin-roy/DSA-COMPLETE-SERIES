#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Employee
{
    string name;
    int Id;
    static int counter;
public:
    void setData(void)
    {
        cout<<"Enter the Name of Employee "<<endl;
        cin>>name;
        cout<<"Enter the Id of Employee: "<<endl;
        cin>>Id;
        counter++;
    }
    void getData(void)
    {
        cout<<"Name of The "<<counter<<" Employee is "<<name<<endl;
        cout<<"The Id of "<<counter<<" Employee is "<<Id<<endl;
    }
    static void getCount(void)
    {
        cout<<"The value of Count is "<<counter<<endl;
    }
protected:
private:
};
int Employee ::counter;
int main()
{
    Employee jud,jus,dav;
    jud.setData();
    jud.getData();
    Employee::getCount();

    jus.setData();
    jus.getData();
    Employee::getCount();

    dav.setData();
    dav.getData();
    Employee::getCount();
return 0;
}
