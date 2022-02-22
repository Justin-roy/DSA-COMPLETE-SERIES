#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        s[i] += 32;//For Upper Letter to Small Latter
        //s[i] -= 32;//For Small Letter to Upper Latter
    }
    cout<<s;
return 0;
}
