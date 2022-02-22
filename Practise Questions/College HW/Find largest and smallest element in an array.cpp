#include <iostream>
using namespace std;
int SmallNum(int A[],int n)
{
   int t = A[0];
   for(int i=0;i<n;i++)
   {
      if(t > A[i])
        t = A[i];
   }
  return t;
}
int LargeNum(int A[],int n)
{
   int t = A[0];
   for(int i=0;i<n;i++)
   {
      if(t < A[i])
        t = A[i];
   }
  return t;
}
int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    int small = SmallNum(A,n);
    cout<<"Smallest Element is: "<<small<<endl;
    int large = LargeNum(A,n);
    cout<<"Largest Element is: "<<large;
return 0;
}
