#include <iostream>
#include <vector>
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
    //v.clear();//If We Use This Nothing To Print...
    v.erase(v.begin()+3);//It's Like Deleting Element At Index Position..
    for(int i=0;i<v.size();i++)
    {
      cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.clear();
    if(v.empty())
        cout<<"Vector is Empty";
    else
        cout<<"Vector is Not Empty";
return 0;
}
