#include <iostream>
using namespace std;

int main()
{
    int a ,b;
    cout<<"Enter Value of a and b: ";
    cin>>a>>b;
    string str[9] = {"One","Two","Three",
    "Four","Five","Six","Seven","Eight",
    "Nine"};
    for(int i=a;i<=b;i++)
    {
       //even or odd
       if(i%2==0)
        cout<<str[i-1]<<" Even"<<endl;
       else
        cout<<str[i-1]<<" Odd"<<endl;
    }
return 0;
}
