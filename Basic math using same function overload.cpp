#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    return n*n*n;
}

int fun(double r, int h)
{
    return 3.14*r*r*h;
}

int fun(int l, int b, int h)
{
    return l*b*h;
}

int main()
{
    cout<<"Volume of Cube is "<<fun(3)<<endl;
    cout<<"Volume of Cylinder is "<<fun(3,8)<<endl;
    cout<<"Volume of Rectangular box "<<fun(3,5,9)<<endl;
    return 0;
}


