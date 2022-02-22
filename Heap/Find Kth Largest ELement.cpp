#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
//if Smallest the create max heap
//if Greatest the create min heap

// Time Depend on k
// nlogk
int main()
{
    //where k = 3;
   int A[] = {7,10,4,3,20,15};
   int n= 6;//Size
   int k = 3;
        /*sort(nums.begin(), nums.end());
        return nums[nums.size()-k];*/
   priority_queue<int,vector<int>,greater<int>> Max;
   for(int i=0;i<n;i++)
   {
      if(Max.size()<k)
      {
         Max.push(A[i]);
      }
      else{
      if(A[i] > Max.top())
      {
          Max.pop();
          Max.push(A[i]);
      }
     }
   }

   cout<< Max.top();
return 0;
}
