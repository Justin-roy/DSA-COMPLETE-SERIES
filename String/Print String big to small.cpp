#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "5426981";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
return 0;
}
