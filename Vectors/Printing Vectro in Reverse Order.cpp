#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v2{1,2,3,4,5,6,7};
    cout<<"Printing In Reverse Order: ";
    vector<int>::reverse_iterator it2;
    for(auto it=v2.rbegin();it!=v2.rend();it++)
    {
       cout<<*it<<" ";
    }
return 0;
}
