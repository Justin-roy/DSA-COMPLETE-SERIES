#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"***** Big endians *****"<<endl;
    int a = 257;
    int *p =&a;
    char *q = (char*)p;
    cout<<char(*q+'a')<<endl;
    q++;
    cout<<char(*q+'a')<<endl;
    q++;
    cout<<char(*q+'a')<<endl;
return 0;
}
