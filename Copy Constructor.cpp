#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Copy
{
    int a;
public:
    Copy(){
     a = 0;
    }
    Copy(int b){
        a = b;
    }
    //When no copy constructor is found, compiler supplies its own copy constructor.....
    Copy(Copy &d){
        cout<<"Copy Constructor Invoked !!!!!!!"<<endl;
        a = d.a;
    }
    void display()
    {
        cout<<"The value of A is: "<<a<<endl;
    }
protected:
private:
};

int main()
{
    Copy x1,x2,x3,z2;
    x1 = Copy(78);
    x1.display();
    x2 = Copy();
    x2.display();
    x3 = Copy();
    x3.display();
    Copy x4(x1); // Destination Passing Means Which One Passing to Copy (x1,x2,x3)........
    x4.display();//Copy Constructor invoked.......
    z2 = x1;//Copy Constructor does not invoked.......
    z2.display();
    Copy z3 = x1;//Copy Constructor invoked.......
    z3.display();
return 0;
}
