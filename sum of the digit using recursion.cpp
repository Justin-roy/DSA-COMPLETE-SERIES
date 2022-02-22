#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int Recursive(int a, int b)
{
    if(a==b)
    {
        return b;
    }
    return a + Recursive(a+1,b);
}
int main()
{
    int a=1,b=4;
    printf("%d",Recursive(a,b));
return 0;
}
