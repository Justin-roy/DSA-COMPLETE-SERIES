#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int H[10];
int N[10];
int main()
{
    string s;
    cout<<"Enter A String: ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
       int a=1;
        N[i] = a<<s[i]-97;
        if(H[i]&N[i]>0)
        cout<<"Duplicate String is: "<<s[i]<<endl;
        else
        H[i] = a|H[i];
    }
return 0;
}
