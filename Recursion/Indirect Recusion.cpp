#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void FunB(int n);
void FunA(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        FunB(n-1);
    }
}
void FunB(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        FunA(n/2);
    }
}
int main()
{
    FunA(20);
return 0;
}

