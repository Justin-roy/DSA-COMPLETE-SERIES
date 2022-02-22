#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1{1,2,3};
    vector<int>v2{7,8,9,10};
    vector<int>v3{1,2,3};
    cout<<(v1>v2)<<endl;//False
    cout<<(v2<=v1)<<endl;//False
    cout<<(v2>v1)<<endl;//True
    cout<<(v1==v3)<<endl;//True
    cout<<(v2!=v1)<<endl;//True
    cout<<(v1!=v3)<<endl;//False
return 0;
}
