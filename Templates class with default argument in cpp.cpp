#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
template <class r=int,class t=float,typename g=char,class d=double>
class Justin
{
public:
    r data1;
    t data2;
    g data3;
    d data4;
    Justin(r l1,t l2,g l3,d l4){
        data1 = l1;
        data2 = l2;
        data3 = l3;
        data4 = l4;
    }
    void Display()
    {
        cout<<data1<<endl<<data2<<endl<<data3<<endl<<data4;
    }
protected:
private:
};

int main()
{
    Justin <>/*< > Angular Bracket*/in(45,10.25,'S','j');
    in.Display();
    cout<<endl<<"\n"<<endl;
    Justin <float,char,char,float> hr(1.02,'g','j',45.2);
    hr.Display();
    cout<<endl;
return 0;
}
