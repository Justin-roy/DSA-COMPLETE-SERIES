#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Constructor
{
    int a,b;
public:
    void Printdata()
    {
        cout<<"The value of A & B is: "<<a<<" "<<b<<endl;
    }
    Constructor(int x, int y)
    {
        a = x;
        b = y;
    }
    Constructor(int x)
    {
        a = x;
        b = 0;
    }
    Constructor()
    {
        a = 0;
        b = 0;
    }
};
int main()
{
    Constructor c1(4,5);
    c1.Printdata();
    Constructor c2(4);
    c2.Printdata();
    Constructor c3;
    c3.Printdata();
return 0;
}
