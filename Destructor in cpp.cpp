#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int counter = 0;
class Destructor
{
public:
    Destructor()
    {
        counter++;
        cout<<"Constructor called "<<counter<<" Time"<<endl;
    }
    ~Destructor()
    {
        cout<<"Destructor called "<<counter<<" Time"<<endl;
        counter--;
    }
protected:
private:
};

int main()
{
    cout<<"We are Inside our main function"<<endl;
    cout<<"Creating first object"<<endl;
    Destructor n;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more object"<<endl;
        Destructor n1,n2;
        cout<<"Existing this block"<<endl;
    }
    cout<<"Back to the main"<<endl;

return 0;
}
