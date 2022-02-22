#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Fun(int n)
{
    if(n>0){
        cout<<n<<" ";
        Fun(n-1);
        cout<<endl<<n<<" ";
    }
   return 0;
}
int main()
{
    int n = 5;
    //cout<<endl<<Fun(n);
    Fun(n);
return 0;
}

