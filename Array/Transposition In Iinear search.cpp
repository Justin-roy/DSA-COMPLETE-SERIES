#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Transposition_Search(int A[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
       if(A[i]==k)
        Swap(&A[i],&A[i-1]);
        return i;
    }
    return -1;
}
void Display(int A[],int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    int k;
    cout<<"Enter Elements you want to Find: ";
    cin>>k;
    cout<<Transposition_Search(A,n,k);
    Display(A,n);
return 0;
}
