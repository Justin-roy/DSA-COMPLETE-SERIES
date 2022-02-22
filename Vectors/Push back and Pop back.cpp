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
       v.push_back(i);
    }
    v.pop_back();
    --n;
    for(int i=0;i<n;i++)
    {
       cout<<v.at(i)<<" ";
    }
return 0;
}
