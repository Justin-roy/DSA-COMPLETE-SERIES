#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Sunny
{
public:
    Sunny(int hr,string n,float s){
        study_hr = hr;
        name = n;
        salary = s;
    }
//    virtual void display(){
//        cout<<"Nothing Show here: "<<endl;
//    }
      virtual void display() = 0; //do-nothing function --> Pure Function....
protected:
    int study_hr;
    string name;
    float salary;
};

class JustinENGINEER : public Sunny
{
    int age;
public:
    JustinENGINEER(int hr,string n,float s,int a):Sunny(hr,n,s){
        age = a;
    }
    void display()
    {
        cout<<"Per day Study Time is: "<<study_hr<<"Hrs."<<endl;
        cout<<"ENGINEER Name: "<<name<<endl;
        cout<<"ENGINEER Salary is Rs."<<salary<<endl;
        cout<<"ENGINEER Age: "<<age<<endl<<endl<<endl;
    }
};
class DavidSTUDENT : public Sunny
{
    int age;
public:
    DavidSTUDENT(int hr,string n,float s,int b):Sunny(hr,n,s){
        age = b;
    }
    void display()
    {
        cout<<"Per day Study Time is: "<<study_hr<<"Hrs."<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Salary is Rs."<<salary<<endl;
        cout<<"Student Age: "<<age<<endl;
    }
};

int main()
{
    int study_hr;
    string name;
    float salary;
    int age;

    // FOR JustinENGINEER
    study_hr = 5;
    name = "Justin Roy";
    salary = 50000.21;
    age = 24;
    JustinENGINEER justin(study_hr,name,salary,age);
    //justin.display();

    // FOR DavidSTUDENT
    study_hr = 9;
    name = "David Roy";
    salary = 8000.21;
    age = 18;
    DavidSTUDENT david(study_hr,name,salary,age);
    //david.display();

    // Sunny
      Sunny *ptr[2];
      ptr[1] = &david;
      ptr[0] = &justin;
      ptr[0]->display();
      ptr[1]->display();


return 0;
}
