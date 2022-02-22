#include <iostream>
#include <bits/stdc++.h>
void toh(int,char,char,char);
using namespace std;
int main()
{
    int n=3;
    toh(n,'A','B','C');
return 0;
}
void toh(int n,char beg,char mid,char ed)
{
    cout<<"Number of Steps: "<<n+1<<endl;
    if(n>=1)
    {
        toh(n-1,beg,ed,mid);
        cout<<n<<" "<<beg<<" "<<ed<<endl;
        toh(n-1,mid,beg,ed);
    }
}
