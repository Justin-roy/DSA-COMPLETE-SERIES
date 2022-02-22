#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Break()
{
    for(int i=0;i<=6;i++)
    {
       if(i==3)
        break;
       cout<<i<<" ";
    }
    cout<<endl;
}
void Continue()
{
    for(int i=0;i<=6;i++)
    {
       if(i==3)
        continue;
       cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    Break();
    Continue();
return 0;
}
