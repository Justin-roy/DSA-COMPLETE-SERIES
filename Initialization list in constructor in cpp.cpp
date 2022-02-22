#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Syntax for initialization list in constructor:
Constructor (argument-list) : initialization-section
{
        assignment + other code
}
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(j) {constructor - body}
};
*/

class Test{
    int a;
    int b;
    public:
//        Test(int i,int j) : a(i), b(j)
//        Test(int i,int j) : a(i), b(j+i)
//        Test(int i,int j) : a(i), b(2*j)
//        Test(int i,int j) : a(i), b(a+j)
//        Test(int i,int j) : a(i+b), b(j) // it Gives u Garbage Value because a is initialize first...
//        Test(int i,int j) : b(j) , a(i+b) // it also Gives u Garbage Value because a is initialize first...
          Test(int i,int j) : a(i)
        {  //constructor - body
            b = j;
            cout<<"Constructor is Called !"<<endl;
            cout<<"Value of A is: "<<a<<endl;
            cout<<"Value of B is: "<<b<<endl;
        }
};
int main()
{
    Test t(4,5);
return 0;
}
