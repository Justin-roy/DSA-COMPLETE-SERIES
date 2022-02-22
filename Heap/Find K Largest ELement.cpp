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
   int k = 3;
   priority_queue<int>MIN;
   for(int i=0;i<6;i++)
   {
      MIN.push(A[i]);
      if(k<MIN.size())
      {
          cout<<MIN.top()<<" ";
          MIN.pop();
      }
   }
return 0;
}
