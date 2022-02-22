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
    int k;
    cout<<"Element You Want Insert: ";
    cin>>k;
    int idx;
    cout<<"Enter Index Position You Want to Insert (0 to "<<n-1<<"): ";
    cin>>idx;
    if(idx>n){
        cout<<"Insertion Is Not Possible";
        exit(0);
    }
    //Inserting Element
    for(int i=n;i>idx;i--)
    {
       Arr[i] = Arr[i-1];
    }
    Arr[idx] = k;
    n++;
    cout<<"Insertion Successful\n";
    for(int i=0;i<n;i++)
    {
       cout<<Arr[i]<<" ";
    }
return 0;
}
