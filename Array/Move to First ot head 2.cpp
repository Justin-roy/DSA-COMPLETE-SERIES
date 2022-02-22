#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Improve_LinearSearch(int A[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(k==A[i])
        //swap(A[i],A[0]); // For Moving Head/First
        swap(A[i],A[i-1]); //For Moving One Place Back
    }
    //Displaying Elements
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    Improve_LinearSearch(a,5,4);
return 0;
}
