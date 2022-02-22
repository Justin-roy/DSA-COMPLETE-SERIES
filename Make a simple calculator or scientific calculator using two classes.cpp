#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
class SimpleCalculator
{
    int cal,cal2;
public:
    void setdata(int r, int r1)
    {
        cal = r;
        cal2 = r1;
    }
    void getdata(int t)
    {
        switch (t)
        {
        case 1:
            cout<<"\nSum of Two number is: "<<cal+cal2<<endl;
            break;
        case 2:
            cout<<"\nDifference of Two number is: "<<cal-cal2<<endl;
            break;
        case 3:
            cout<<"\nMultiplication of Two number is: "<<cal*cal2<<endl;
            break;
        case 4:
            cout<<"\nDivision of Two number is: "<<cal/cal2<<endl;
            break;

        default:
            cout<<"\nInvalid Input !"<<endl;
            break;
        }
    }
protected:
private:
};

class ScientificCalculator
{
    int a,b,c;
public:
    void getdata(int sc)
    {
        switch (sc)
        {
        case 1:
            cout<<"\nEnter two number to find Power:(Input ex--> 2 3 Its power is 8) ";
            cin>>a>>b;
            cout<<"\nPower: "<<pow(a,b)<<endl;
            break;
        case 2:
            cout<<"\nEnter the number for calculating SIN: ";
            cin>>a;
            cout<<"\nSin: "<<sin(a)<<endl;
            break;
        case 3:
            cout<<"\nEnter the number for calculating COS: ";
            cin>>a;
            cout<<"\nCos: "<<cos(a)<<endl;
            break;
        case 4:
            cout<<"\nEnter the number for calculating TAN: ";
            cin>>a;
            cout<<"\nTan: "<<tan(a)<<endl;
            break;
        case 5:
            cout<<"\nEnter the number for calculating SquareRoot: ";
            cin>>a;
            cout<<"\nSquareRoot: "<<sqrt(a)<<endl;
            break;
        case 6:
            cout<<"\nEnter the number for calculating LOG: ";
            cin>>a;
            cout<<"\nLog: "<<log(a)<<endl;
            break;
        case 7:
            cout<<"\nEnter the number for calculating LOG WITH BASE 10: ";
            cin>>a;
            cout<<"\nLogBase10: "<<log10(a)<<endl;
            break;
        case 8:
            cout<<"\nEnter the number for calculating Cube: ";
            cin>>a;
            cout<<"\nCube: "<<(a*a*a)<<endl;
            break;
        case 9:
            cout<<"\nEnter the number for calculating Cuboid:(v=a*b*c) ";
            cin>>a>>b>>c;
            cout<<"\nVolume of Cuboid: "<<(a*b*c)<<endl;
            break;
        case 10:
            cout<<"\nEnter the number for calculating Square: ";
            cin>>a;
            cout<<"\nSquare: "<<(a*a)<<endl;
            break;
        default:
            cout<<"\nInvalid Input !"<<endl;
            break;
        }
    }
protected:
private:
};

int main()
{
    int n,n1,choice,choice2,a,b;
    cout<<"Enter First Number: ";
    cin>>n;
    cout<<"Enter Second Number: ";
    cin>>n1;
    cout<<endl;
    cout<<"1. For Additions \n";
    cout<<"2. For Difference \n";
    cout<<"3. For Multiplication \n";
    cout<<"4. For Division \n";
    cout<<"\nEnter Your Choice "<<endl;
    cin>>choice;
    SimpleCalculator c;
    c.setdata(n,n1);
    c.getdata(choice);
    cout<<"\n\n";
    cout<<"********************************************************\n\n";
    cout<<"1. For Power \n";
    cout<<"2. For Sin \n";
    cout<<"3. For Cos \n";
    cout<<"4. For Tan \n";
    cout<<"5. For SquareRoot \n";
    cout<<"6. For Log \n";
    cout<<"7. For LogBase10 \n";
    cout<<"8. For Cube \n";
    cout<<"9. For Cuboid \n";
    cout<<"10. For Square \n";
    cout<<"\nEnter Your Choice ";
    cin>>choice2;
    ScientificCalculator k;
    k.getdata(choice2);
return 0;
}
