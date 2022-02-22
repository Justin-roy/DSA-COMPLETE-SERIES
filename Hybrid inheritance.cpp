#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void calldata1(void){
    cout<<"Class A is Called !"<<endl;
    }
protected:
private:
};
class B : public A
{
public:
    void calldata2(void){
    cout<<"Class B is Called !"<<endl;
    }
protected:
private:
};
class C
{
public:
    void calldata3(void){
    cout<<"Class C is Called !"<<endl;
    }
protected:
private:
};
class D : public B , public C
{
public:
    void calldata4(void){
    cout<<"Class D is Called !"<<endl;
    }
protected:
private:
};

int main()
{
    D a;
    a.calldata1();
    a.calldata2();
    a.calldata3();
    a.calldata4();
return 0;
}
