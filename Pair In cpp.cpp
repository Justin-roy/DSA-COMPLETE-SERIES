#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair <int,string> s;
    //s = make_pair(123,"Justin");
    s = {45,"David"};
    cout<<s.first<<" "<<s.second<<endl;
    pair <int,string> &p = s;
    p.first = 4;
    cout<<s.first<<" "<<s.second<<endl;

    pair<int,int> Array[3];
    Array[0] = {1,2};
    Array[1] = {4,5};
    Array[2] = {7,8};
    swap(Array[0],Array[2]);
    for(int i=0;i<3;i++)
    {
      cout<<Array[i].first<<" "<<Array[i].second<<endl;
    }
    cout<<"Enter Number and String: ";
    cin>>s.first>>s.second;
    cout<<s.first<<" "<<s.second<<endl;
return 0;
}
