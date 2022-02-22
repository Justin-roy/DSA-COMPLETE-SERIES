#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Y;
class X
{
    int data;
public:
    void setValue(int value){
        data = value;
    }
    friend void sumdata(X,Y);
};
class Y
{
int num;
public:
    friend void sumdata(X,Y);
    void setValue(int value){
        num = value;
    }
};
void sumdata(X b1, Y b2)
{
    cout<<"The of sum of X and Y is "<<b1.data + b2.num<<endl;
}
int main()
{
    X a;
    a.setValue(4);
    Y b;
    b.setValue(5);
    sumdata(a,b);
return 0;
}
