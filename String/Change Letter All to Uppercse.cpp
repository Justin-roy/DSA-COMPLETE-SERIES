#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=95)
        s[i] += 32;//For Upper Letter to Small Latter
        else if(s[i]>=97 && s[i]<=122)
        s[i] -= 32;//For Small Letter to Upper Latter
    }
    cout<<"Upper Became Lower and Lower Became Upper: "<<s;
return 0;
}
