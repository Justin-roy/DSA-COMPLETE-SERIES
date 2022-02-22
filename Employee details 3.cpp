#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int Id;
    int Salary;

public:
    int counter = 0;
    void setId(void)
    {
        cout<<"Enter the Id of "<<++counter<<" Employee: ";
        cin>>Id;
    }
    void getId(void)
    {
        cout<<"Employee Id is: "<<Id<<endl;
    }
protected:
private:
};


int main()
{
    Employee id[4];
    for(int i=0;i<4;i++){
       id[i].setId();
       id[i].getId();
    }
return 0;
}
