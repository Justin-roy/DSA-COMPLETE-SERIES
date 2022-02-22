#include <iostream>
#include <climits>
using namespace std;
//2 5 8 12 3 6 7 10
void Merge_Single_Array(int A[],int l,int mid,int h)
{
    int i,j,k = 0;
    i = l;
    j = mid+1;
    int C[h+1];
    while(i<=mid && j<=h)
    {
       if(A[i]<A[j])
        C[k++] = A[i++];
       else
        C[k++] = A[j++];
    }
    if(i<=mid)
    {
        while(i<=mid)
         C[k++] = A[i++];
    }
    else if(j<=h)
    {
        while(j<=h)
         C[k++] = A[j++];
    }
    //Coping Elements...
    k=0;
    for(int p=l;p<=h;p++)
    {
      A[p] = C[k++];
    }
}
void MergeSort(int A[],int s,int e)
{
    if(s>=e)
        return;
    int mid = (e+s)/2;
    MergeSort(A,s,mid);
    MergeSort(A,mid+1,e);
    Merge_Single_Array(A,s,mid,e);
}
int main()
{
    int n;
    cout<<"Enter the Size of 1st Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    MergeSort(A,0,n-1);
    cout<<endl<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}

