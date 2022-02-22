#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>Arr[i];
    }
    int idx;
    cout<<"Enter Index Position You Want to Delete (0 to "<<n-1<<"): ";
    cin>>idx;
    if(idx>n){
        cout<<"Deletion Is Not Possible";
        exit(0);
    }
    //Inserting Element
    for(int i=idx;i<n-1;i++)
    {
       Arr[i] = Arr[i+1];
    }
    cout<<"Deletion Successful\n";
    for(int i=0;i<n-1;i++)
    {
       cout<<Arr[i]<<" ";
    }
return 0;
}

