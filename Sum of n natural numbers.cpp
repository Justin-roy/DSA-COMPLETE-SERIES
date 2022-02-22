#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans += i;
    }
    cout<<"The Sum of N Natural number is: "<<ans;
return 0;
}
