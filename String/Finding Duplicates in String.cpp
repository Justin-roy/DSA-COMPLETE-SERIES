#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int H[26];
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
     if((s[i]>=97 && s[i]<=122))//For Small Letter
       H[s[i]-97] += 1;
     else if(s[i]>=65 && s[i]<=90)//For Capital Letter
       H[s[i]-65] += 1;
    }
    for(int i=0;i<26;i++)
    {
        if(H[i]>1){
       char t = i+65;
cout<<"Duplicate String is '"<<t
<<"' And Repeating Time is: "<<H[i]<<endl;
    }
    }
return 0;
}
