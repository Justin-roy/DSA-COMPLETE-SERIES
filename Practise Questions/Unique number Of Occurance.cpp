#include <iostream>
using namespace std;
void uniqueOccurance(int A[],int n)
{
   int i = 0;
   while(i<n)
   {
      int CurrentIndex = A[i] - 1;
      if(A[i] != A[CurrentIndex])
      swap(A[i],A[CurrentIndex]);
      else
        i++;
   }

   //return false;
}
int main()
{
   int A[6] = {1,2,2,1,1,3};
   uniqueOccurance(A,6);
   for(int i=0;i<6;i++)
   {
     cout<<A[i]<<" ";
   }cout<<endl;
return 0;
}
