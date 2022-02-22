#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=1,b=1;
    a = a++ + ++a + --b + b++;
    cout<<a<<" "<<b;
return 0;
}

