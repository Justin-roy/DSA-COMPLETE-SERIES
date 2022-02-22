#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    int id_p;
protected:
private:
};

class Child : public Parent
{
public:
    int id_c;
protected:
private:
};

int main()
{
    Child obj;
    obj.id_c = 9;
    obj.id_p = 6;
    cout<<"Child "<<obj.id_c<<endl;
    cout<<"Parent "<<obj.id_p<<endl;
return 0;
}
