#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<string>v;
    cout<<"How Many Record You Want: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      string s;
      cout<<"Enter "<<i+1<<" Name"<<endl;
      cin>>s;
      v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
       cout<<v.at(i)<<endl;
    }
return 0;
}
