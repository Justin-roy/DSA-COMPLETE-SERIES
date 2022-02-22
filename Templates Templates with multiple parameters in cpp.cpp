#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
//Multiple Parameter.........
template <class t1,class t2,class t3,class t4>// < > Angular Bracket......
class Hello
{
public:
    t1  data;
    t2  data1;
    t3  data2;
    t4  data3;
    Hello(t1 d,t2 p,t3 d1,t4 p2){
          data = d;
          data1 = p;
          data2 = d1;
          data3 = p2;
    }
    void display()
    {
        cout<<this->data<<endl<<this->data1<<endl<<data2<<endl<<data3;
    }
protected:
private:
};

int main()
{
    Hello <int ,char,float,double> /*< > Angular Bracket*/call(45,'c',45.2,'a');
    call.display();
return 0;
}
