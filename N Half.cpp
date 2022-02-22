#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int HalfN(int N,int M)
{
    int C=0;
    while(N>0)
    {
       ++C;// 1 2 3
       if(M==C)// 4 ==
       {
         return N;
       }
       else
          N = N/2;// 50 25 12
    }
    return 0;
}
int main()
{
    int N,M;
    cout<<"Enter the Value of N: ";
    cin>>N;
    cout<<"Enter the Value of M: ";
    cin>>M;
    cout<<HalfN(N,M);
return 0;
}
