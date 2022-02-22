#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int H[25];
int main()
{
    string s = "decimal";
    string t = "medical";
    for(int i=0;s[i]!='\0';i++)
    {
        H[s[i]-97]+=1;
    }
    int i=0;
    for(i=0;t[i]!='\0';i++)
    {
        H[t[i]-97]-=1;
        if(H[t[i]-97]<0)
        {
            cout<<"String is Not Anagram";
            break;
        }
    }
    if(t[i]=='\0')
        cout<<"String is Anagram";
return 0;
}
