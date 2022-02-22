#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int len = len*2 - 1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
          int minn = i<=j ? i : j;
          minn = minn <= len-i ? minn : len-i-1;
          minn = minn <= len-j-1 ? minn : len-j-i;
          cout<<n-minn+1<<" ";
        }
        cout<<endl;
    }
return 0;
}
