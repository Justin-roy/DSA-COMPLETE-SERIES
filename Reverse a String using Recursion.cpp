#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Reverse_string(string s)
{
    if(s.length()==0)
        return;
    string rest_str = s.substr(1);
    Reverse_string(rest_str);
    cout<<s[0];

}
int main()
{
    string s;
    cout<<"Enter String: ";
    cin>>s;
    Reverse_string(s);
return 0;
}

