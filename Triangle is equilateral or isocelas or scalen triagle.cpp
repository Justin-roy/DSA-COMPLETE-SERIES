#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the Sides(A,B,C): ";
    cin>>a>>b>>c;

    if(a==b && b==c)
    {
        cout<<"Equilateral Triangle (Three Sides are equal)"<<endl;
    }
    else if(a!=b && a!=c && b!=c)
    {
        cout<<"Scalene Triangle (All Sides are Not equal)"<<endl;
    }
    else
    {
        cout<<"Isosceles Triangle (Two Sides are equal)"<<endl;
    }
return 0;
}
