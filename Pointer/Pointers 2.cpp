#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 257;
    int *p = &a;
    cout<<(char)(*(char*)p + 'a')<<endl;
    cout<<*p;
return 0;
}
