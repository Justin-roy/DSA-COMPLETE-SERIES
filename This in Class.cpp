#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arithmetics
{
public:
    Arithmetics(T a,T b);
    T Add();
    T Sub();
    ~Arithmetics();
protected:
private:
    T a;
    T b;
};
template <class T>
Arithmetics <T> :: Arithmetics(T a,T b)//Intializing a and b
{
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmetics <T> :: Add()
{
    T c;
    c = a+b;
    return c;
}
template <class T>
T Arithmetics <T> :: Sub()
{
    T c;
    c = a-b;
    return c;
}
template <class T>
Arithmetics <T> :: ~Arithmetics(){}
int main()
{
    Arithmetics<int> A(10,5);
    cout<<"Add = "<<A.Add();
    cout<<"\nSub = "<<A.Sub();
    cout<<"\n******************"<<endl;
    Arithmetics<float> A1(10.5,5.0);
    cout<<"Add = "<<A1.Add();
    cout<<"\nSub = "<<A1.Sub();
    cout<<"\n******************"<<endl;
    Arithmetics<double> A2(10.5,5.7);
    cout<<"Add = "<<A2.Add();
    cout<<"\nSub = "<<A2.Sub();
}
