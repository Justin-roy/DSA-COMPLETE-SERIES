#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Fib(int n)
{
    if(n<=1)
        return n;
    return Fib(n-1) + Fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    cout<<Fib(n);// 0 1 1 2 3 5 8 13 21 34
return 0;//Index -> 0 1 2 3 4 5 6 7  8  9
}

