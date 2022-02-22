#include <iostream>
#include <vector>
//Finding Duplicates using XOR Properties..
using namespace std;
void ForOneUni(int A[])
{
   int res = 0;
   for(int i=0;i<7;i++)
   {
      res = res ^ A[i];
   }
   cout<<"ForOneUnique Number: "<<res<<endl;
}
void ForTwoUni(int B[])
{
   int res = 0;
   int a;
   for(int i=0;i<8;i++)
   {
      a = res;
      res = res ^ B[i];
   }
   int t = res^a;
   cout<<"ForTwoUnique Number: "<<t<<" "<<a<<endl;
}
void ThriceRepeating(int A[],int n)
{
   vector<int>v;
   int i = 0;
    while(i<n)
    {
       int CurrentIndex = A[i] - 1;
       if(A[i] != A[CurrentIndex])
          swap(A[i],A[CurrentIndex]);
       else
        i++;
    }
    for(int y=0;y<n;y++)
    {
       if(A[y] != y+1)
        v.push_back(A[y]);
    }
    for(int j=0;j<v.size();j++)
    {
       cout<<v.at(j)<<" ";
    }cout<<endl;
}
int main()
{
   int A[7] = {5,4,1,4,3,5,1};//For One Unique
   int B[8] = {9,4,1,4,3,9,1,5};//For Two Unique
   int C[7] = {2,2,1,5,1,1,2}; // thrice repeating
   ForOneUni(A);
   ForTwoUni(B);
   ThriceRepeating(C,7);
return 0;
}


