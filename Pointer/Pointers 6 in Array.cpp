#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {50,40,60};
    int *ptr=arr;
    int n = sizeof arr/sizeof arr[0];
//    for(int i=0;i<n;i++){
//       cout<<*ptr<<endl;
//       ++ptr;
//    }
    for(int i=0;i<n;i++){
       cout<<*(arr+i)<<endl;
       //(*arr)++;
    }
return 0;
}
