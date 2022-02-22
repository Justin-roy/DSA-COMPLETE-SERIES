#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Vector and Pair...
int main()
{
    pair<int,string> p;
   // p = make_pair(5,"Justin");
    p = {5,"Justin"};
    pair<int,string> &p1 = p;
    //p1.first=10;
    cout<<"Enter the P1 first value: ";
    cin>>p1.second;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {5,7};
    p_array[2] = {6,9};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
      {
        cout<<p_array[i].first<<" "<<p_array[i].second<<" "<<endl;
      }
return 0;
}

