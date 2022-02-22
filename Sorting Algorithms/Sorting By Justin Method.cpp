#include <iostream>
#include <climits>
using namespace std;
int FindMin(int A[],int n)
{
   int Min = A[0];
   cout<<"Function Call Min: "<<Min<<endl;
   for(int i=0;i<n;i++)
   {
      if(A[i]<Min && A[i]!=0)
        Min = A[i];
   }
   return Min;
}
void SortOwnMethod(int A[],int n)
{
    int Min;
    int NewArray[n];
    for(int i=0;i<n;i++)
       NewArray[i] = 0;
    for(int i=0;i<n;i++)
    {
        Min =  FindMin(A,n);
        cout<<"Min Number: "<<Min<<endl;
        if(A[i]==Min){
           A[i] = 0;
          NewArray[i] = Min;
        }
    }
    for(int i=0;i<n;i++)
    {
       cout<<NewArray[i]<<" ";
    }cout<<endl;
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
    SortOwnMethod(A,n);
return 0;
}
