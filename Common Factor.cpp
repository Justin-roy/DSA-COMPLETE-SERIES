#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8,a=5,Gcd;
    for(int i=1;i<=n && i<=a;i++)
    {
       if(n%i==0 && a%i==0)
        Gcd = i;
    }
    cout<<"Factor is: "<<Gcd;
return 0;
}
