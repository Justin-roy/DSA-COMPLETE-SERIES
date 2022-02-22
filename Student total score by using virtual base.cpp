#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Student --> Marks
Student --> Test
Marks --> Result
Test --> Result
*/
class Student
{
public:
    void Roll_no(int y)
    {
        r = y;
    }
    void display(void)
    {
        cout<<"Justin Roy Info: "<<endl;
        cout<<"Your Roll_no is: "<<r<<endl;
    }
protected:
    int r;
private:
};
class Marks : virtual public Student
{
public:
    void Student_marks(int r,int r1)
    {
        a = r;
        b = r1;
    }
    void display1(void)
    {
        cout<<"\nYour Score is Here: "<<endl;
        cout<<"Your Math marks is: "<<a<<endl;
        cout<<"Your Physics marks is: "<<b<<endl;
    }
protected:
    int a,b;
private:
};
class Test : virtual public Student
{
public:
    void Score(int r)
    {
        c = r;
    }
    void display2(void)
    {
        cout<<"Your PT Score out of 100 is: "<<c<<endl;
    }
protected:
    int c;
private:
};
class Result : public Marks, public Test
{
public:
    void Total(void)
    {
        display();
        display1();
        display2();
        total = a + b + c;
        cout<<"Total Score is: "<<total<<endl;
    }

protected:
private:
    float total;
};

int main()
{
    Result r;
    r.Roll_no(22);
    r.Student_marks(54,65);
    r.Score(45);
    r.Total();
return 0;
}
