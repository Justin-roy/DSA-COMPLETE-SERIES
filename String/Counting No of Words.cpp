#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    int word=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
            word++;
    }
    cout<<"No of Words is: "<<word;
return 0;
}
// My Name is Justin Roy   and my Hobby is Watching    movies

