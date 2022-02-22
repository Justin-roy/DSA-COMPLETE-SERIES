#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
void increment(int *a)
{
    (*a)++;//*x = *x + 1;
}
int main()
{
    int a=8;
    cout<<a<<endl;
    increment(&a);
    cout<<a<<endl;
return 0;
}
