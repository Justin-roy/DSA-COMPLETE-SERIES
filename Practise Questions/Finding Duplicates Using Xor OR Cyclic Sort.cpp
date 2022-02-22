#include <iostream>
using namespace std;

int Using_Cyclic_Sort(int A[],int n)
{
    // Time Is O(N)
    int i = 0;
    while(i<n)
    {
       if(A[i] != i+1){
       int CurrentIndex = A[i] - 1;
       if(A[i] != A[CurrentIndex])
          swap(A[i],A[CurrentIndex]);
       else
          return A[i];
       }
       else
        i++;
    }
    return -1;
}
int Using_Xor(int A[],int n)
{
   int ans = 0;
   for(int i=0;i<n;i++)
   {
      ans = ans ^ A[i];
   }
   for(int i=1;i<n;i++)
   {
      ans = ans ^ i;
   }
   return ans;
}
int main()
{
    int A[6] = {5,1,2,3,4,2};
    int B[9] = {8,7,2,5,4,7,1,3,6};
    cout<<Using_Xor(A,6)<<endl;
    cout<<Using_Xor(B,9)<<endl;
    cout<<Using_Cyclic_Sort(A,6)<<endl;
    cout<<Using_Cyclic_Sort(B,9)<<endl;
return 0;
}
