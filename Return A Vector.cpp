#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> Fun(vector<int >v)
{
    vector<int>t;
    for(int i=0;i<v.size();i++)
        t.push_back(v[i]*2);
 return t;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Vector: ";
    cin>>n;
    vector<int>v,s;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    s = Fun(v);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
return 0;
}
