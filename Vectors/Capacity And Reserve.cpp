#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10);
    cout<<"The Capacity Of the Vector is: "
    <<v.capacity()<<endl;
    vector<int>v1;
    v1.reserve(20);
    cout<<"The New Capacity Of the Vector is: "
    <<v1.capacity()<<endl;
    v.pop_back();
    cout<<"The Capacity Of the Vector After Pop_back is: "
    <<v.capacity()<<endl;
    cout<<"The Size Of the Vector After Pop_back is: "
    <<v.size();
return 0;
}
