#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cout<<"Enter Binary Number: ";
    cin>>n;
    int dec=0,rem,i=0;
    while(n!=0)
    {
        rem = n%10;
        n /= 10;
        dec += rem * pow(2,i);
        ++i;
    }
    cout<<"Decimal Number: "<<dec;
return 0;
}
