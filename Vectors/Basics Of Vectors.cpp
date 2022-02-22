#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5,2);//Five times two..
    for(int i=0;i<v.size();i++)
    {
       cout<<v.at(i)<<" ";
    }
    cout<<endl;
    vector<int>v2(5);//Size of the Vector..
    for(int i=0;i<v2.size();i++)
    {
       cout<<v2.at(i)<<" ";//It gives by default zero..
    }
    cout<<endl;
    vector<char> b{'A','B','C','D'};
    cout<<"The First Character is: "<<b.front()<<endl;
    cout<<"And the Last Character is: "<<b.back()<<endl;
return 0;
}
