#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Recursion_call(int n)
{
    if(n==10)
        return n;
    return Recursion_call(n+1);
}
int main()
{
    int n=1;
    cout<<Recursion_call(n)<<" ";
return 0;
}

