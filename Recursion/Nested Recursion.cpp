#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Fun(int n)
{
    if(n>100){
        return n-10;
    }
    else
        return Fun(Fun(n+11));
}
int main()
{
    cout<<Fun(95);
return 0;
}

