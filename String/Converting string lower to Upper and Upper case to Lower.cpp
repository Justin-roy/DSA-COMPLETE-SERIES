#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "flksdjfljsldakfj";
    string ss = "JSDLFKJSLJFLS";
    //Convert into upper case
//    for(int i=0;i<s.size();i++){
//       if(s[i]>='a' && s[i]<='z')
//        s[i]-=32;
//    }
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;
    //Convert into lower case
//    for(int i=0;i<ss.size();i++){
//       if(ss[i]>='A' && ss[i]<='Z')
//        ss[i]+=32;
//    }
    transform(ss.begin(),ss.end(),ss.begin(), ::tolower);
    cout<<ss;
return 0;
}
