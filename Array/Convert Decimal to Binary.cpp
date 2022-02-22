#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    int A[50],i;
    for(i=0;n>0;i++)
    {
       A[i] = n%2;
       n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
       cout<<A[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the Value of N: ";
    cin>>n;
    int m=n;
    while(n)
    {
        int temp = n%2;
        cout<<temp;
        n = n/2;
    }
    cout<<endl;
    fun(m);
return 0;
}
