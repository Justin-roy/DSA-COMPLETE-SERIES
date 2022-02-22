#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Create a function (Hint: Make it a friend function) which takes 2 point
// objects and computes the distance between those 2 points.
class Point
{
    double a,b,c,d;
public:
    Point(double,double,double,double);//constructor declaration.
    void Printdata()
    {
        cout<<"Square Root of two points is: "<<sqrt(pow(a-b,2)+pow(c-d,2))<<endl;
    }
};
Point :: Point(double x1, double x2, double y1, double y2)//This is a Parameterized constructor as it takes two parameters.
{
    a = x1;
    b = x2;
    c = y1;
    d = y2;
}
int main()
{
    //Implicit call
    Point si(1,0,70,0);
    si.Printdata();
return 0;
}

