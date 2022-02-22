#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Simple
{
    int data1;
    int data2;
public:
    Simple(int a,int b=8)//This is called default argument...........
    {
        data1 = a;
        data2 = b;
    }
    void Printdata();
protected:
private:
};
void Simple :: Printdata()
{
    cout<<"The value of Data1 and Data2 is : "<<data1<<" "<<data2<<endl;
}
int main()
{
    //Simple si; //This is does not work because no function call in default argument.......
    Simple si(1);
    si.Printdata();
    Simple i(9);
    i.Printdata();
    Simple s(4,7);
    s.Printdata();
return 0;
}
