#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Power(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return Power(m*m,n/2);
    else
        return m*Power(m*m,(n-1)/2);
}
int IPower(int m,int n)
{
    if(n==0)
        return 1;
    return IPower(m,n-1)*m;
}
int main()
{
    cout<<"Power: "<<IPower(2,9);
return 0;
}

