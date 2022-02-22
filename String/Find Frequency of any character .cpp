#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
void Freq(string s)
{
    int f[256] = {0};
    for(int i=0;s[i];i++){
       f[s[i]]++;
    }
    for(int i=0;s[i];i++){
       if(s[i])
       {
         cout<<s[i]<<" "<<f[s[i]]<<endl;
         f[s[i]] = 0;
       }
    }
}
int main()
{
    string s = "aaadffdfeeddggg";
    Freq(s);
return 0;
}
