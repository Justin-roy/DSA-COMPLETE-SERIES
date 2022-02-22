#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base
{
protected:
    int a;
private:
    int b;
};
/*
For a protected member:
                            Public derivation    Private derivation    Protected derivation
1. Private members          Not Inheritance      Not Inheritance       Not Inheritance
2. Protected members        Protected            Private               Protected
3. Public members           Public               Private               Protected
*/
class Derived : protected Base
{
public:
protected:
private:
};

int main()
{
    Base b;
    Derived r;
    cout<<r.a; // Will not work since a is protected in both base as well as derived class.......
return 0;
}
