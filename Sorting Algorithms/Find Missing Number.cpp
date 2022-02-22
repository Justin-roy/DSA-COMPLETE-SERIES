#include <iostream>
#include <climits>
using namespace std;
int Missing_Number(int A[],int n)
{
    int i = 0;
    while(i<n)
    {
       int Current = A[i];
       cout<<"Current: "<<Current<<endl;
       if(A[i] < n && A[i] != A[Current])
       {
         cout<<"A[Current] : "<<A[Current]<<endl;
         swap(A[i],A[Current]);
       }
       else
        i++;
    }
    // Searching ...
    for(int index=0;index<n;index++)
    {
       if(A[index] != index)
       {
          return index;
       }
    }
    return n;
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
    int N = Missing_Number(A,n);
    cout<<"Missing Number is: "<<N;
return 0;
}
