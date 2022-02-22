#include <iostream>
#include <fstream>
#include <functional>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Function Object (Functor) : Function wrapped in a class so that it available like an object
    int arr[]= {2,5,7,78,10,1,3,12,44,102,8};
//    sort(arr,arr+11);
    sort(arr,arr+11,greater<int>());
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}
