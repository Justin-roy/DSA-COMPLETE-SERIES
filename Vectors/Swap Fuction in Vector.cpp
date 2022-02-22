#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(5);
    vector<int>v;
    v.push_back(10);
    v1.swap(v);//It's Work in Constant Amount of Time..
    cout<<"The Value of V1 is: "<<v1.front()<<endl;
    cout<<"The Value of V is: "<<v.front()<<endl;
return 0;
}
