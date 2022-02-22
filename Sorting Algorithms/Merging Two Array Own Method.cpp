#include <iostream>
#include <climits>
using namespace std;
void Merge_Both_Array(int A[],int B[],int n,int m)
{
    int i,j,k;
    i = j = k = 0;
    int C[n+m];
    while(i<n && j<m)
    {
       if(A[i]<B[j])
        C[k++] = A[i++];
       else
        C[k++] = B[j++];
    }
    for(;i<n;i++)
    {
      C[k++] = A[i];
    }
    for(;j<m;j++)
    {
      C[k++] = B[j];
    }
    cout<<endl<<"Sorted Array: ";
    for(int l=0;l<n+m;l++)
    {
      cout<<C[l]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"Enter the Size of 1st Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Sorted Array Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    cout<<"Enter the Size of 2nd Array: ";
    cin>>m;
    int B[m];
    cout<<"Enter Sorted Array Elements\n";
    for(int i=0;i<m;i++)
    {
      cin>>B[i];
    }
    Merge_Both_Array(A,B,n,m);
return 0;
}
