#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Print(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    Print(n-1);
}
int main()
{
   Print(10);
return 0;
}

