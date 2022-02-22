#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    int Id;
    long long int Mobile_no;
    string Parking_area;
    float Timing;
    int Taken_time_to_complete_projects;
    double salary;
protected:
    string Password = "@J1ustin";
private:
    int salary_increase_by_per_year = 10000;
    int festival_bonus = 25000;
};

int main()
{
    Employee jus;
    jus.name = "Justin Roy";
    jus.Id = 456;
    jus.Mobile_no = 4521056330;
    jus.Parking_area = "Block A";
    jus.Timing = 10.45;
    jus.Taken_time_to_complete_projects = 3;
    jus.salary = 650000;
   // cout<<"Password of Employee is "<<jus.Password<<endl;
    cout<<"Name of Employee is "<<jus.name<<endl;
    cout<<"Id of Employee is "<<jus.Id<<endl;
    cout<<"Mobile_no of Employee is "<<jus.Mobile_no<<endl;
    cout<<"Parking_area of Employee is "<<jus.Parking_area<<endl;
    cout<<"Timing of Employee is "<<jus.Timing<<"Am"<<endl;
    cout<<"Taken_time_to_complete_projects of Employee is "<<jus.Taken_time_to_complete_projects<<"hrs"<<endl;
    cout<<"salary of Employee is "<<jus.salary<<endl;
return 0;
}
