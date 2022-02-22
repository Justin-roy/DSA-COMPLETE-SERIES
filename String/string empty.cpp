#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Justin";
    cout<<s;
    //s.clear();
    if(s.empty()) //if(!s.empty()) means not empty u don't want to include
        cout<<"\nString is Empty!";
    else
        cout<<"\nString is Not Empty!";
return 0;
}
