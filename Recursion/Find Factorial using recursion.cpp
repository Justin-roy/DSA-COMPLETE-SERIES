#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Fact(int n)
{
    if(n<=1)
     return n;
    return n*Fact(n-1);
}
int main()
{
    cout<<Fact(5);
return 0;
}

