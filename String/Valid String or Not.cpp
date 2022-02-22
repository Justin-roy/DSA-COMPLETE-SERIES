#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Valid(string s)
{
    for(int i=0;s[i]!='\0';i++)
    {
       if(!(s[i]>=65 && s[i]<=90) &&//Not in Range
          !(s[i]>=97 && s[i]<=122) &&
          !(s[i]>=48 && s[i]<=57))
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    cout<<"Enter Your Password: ";
    getline(cin,s);
    if(Valid(s))
        cout<<"Password Is Saved..";
    else
        cout<<"Invalid Password..";

return 0;
}
