#include <iostream>
#include <vector>
using namespace std;
void MisMatch(int A[],int n)
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
       if(A[y] != y+1){
        v.push_back(A[y]);//This Will Element Present Twice
        v.push_back(y+1);// This will Index...
       }
    }
    for(int j=0;j<v.size();j++)
    {
       cout<<v.at(j)<<" ";
    }cout<<endl;
}
int main()
{
    int A[4] = {1,2,2,4};
    int B[2] = {1,1};
    MisMatch(A,4);
    MisMatch(B,2);
return 0;
}
