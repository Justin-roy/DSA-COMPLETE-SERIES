#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter any Number: ";
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
       if(n%i==0){
        cout<<"Not Prime: "<<n<<endl;
        flag = 1;
        break;
       }
    }
    if(flag==0)
        cout<<"Prime: "<<n<<endl;
return 0;
}
