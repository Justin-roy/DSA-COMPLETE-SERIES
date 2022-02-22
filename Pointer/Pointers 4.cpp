#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<&a;
return 0;
}
