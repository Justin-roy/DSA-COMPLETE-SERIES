#include <iostream>
#include <algorithm>
using namespace std;
int GCD(int a,int b)
{
   if(a==0)
     return b;
   return GCD(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter the Value of AxB: ";
    cin>>a>>b;
    cout<<__gcd(a,b);
return 0;
}
