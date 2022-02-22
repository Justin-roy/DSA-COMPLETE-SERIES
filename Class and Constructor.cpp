#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    Rectangle(int l, int b)
    {
        len = l;
        breadth = b;
    }
    int Area(){
    return len * breadth;
    }
    void ChangeLen(int l)
    {
        len = l;
        cout<<"\nChange Len: "<<len;
    }
protected:
private:
    int len;
    int breadth;
};

int main()
{
    Rectangle r(5,2);
    int a = r.Area();
    cout<<"Area is: "<<a;
    r.ChangeLen(20);
}
