#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Permutation(string s,int l,int h)
{
    if(l==h)
        cout<<s<<endl;
    for(int i=l;i<=h;i++)
    {
        swap(s[l],s[i]);
        Permutation(s,l+1,h);
        swap(s[l],s[i]);
    }
}
int main()
{
    string s="ABC";
    int l=0;
    int h=2;
    Permutation(s,l,h);
return 0;
}
