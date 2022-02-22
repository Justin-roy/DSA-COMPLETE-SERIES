#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Vector: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    v.insert(v.begin()+3,20);
    for(int i=0;i<=n;i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl<<"Using Insert Function...\n";
    vector<int>j;
    j.push_back(1);
    j.push_back(2);
    j.push_back(3);
    j.push_back(4);
    vector<int>s;
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);
    s.push_back(8);
    s.insert(s.end(),j.begin(),j.end());
    for(int i=0;i<s.size();i++)
    {
       cout<<s.at(i)<<" ";
    }
return 0;
}
