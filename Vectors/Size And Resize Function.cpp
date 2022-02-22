#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v;
    for(int i=0;i<10;i++) v.push_back(i);
    cout<<"Size of Vector is: "<<v.size()<<endl;
    v.resize(6);
    cout<<"ReSize of Vector is: "<<v.size()<<endl;
return 0;
}
