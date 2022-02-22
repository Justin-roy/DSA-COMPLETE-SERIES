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
   priority_queue<int>Max;
   for(int i=0;i<6;i++)
   {
      Max.push(A[i]);
      cout<<"Top Elements: "<<Max.top()<<endl;
      if(k<Max.size())
      {
          cout<<"Poped Elements: "<<Max.top()<<endl;
          Max.pop();
      }
   }
   cout<<Max.top();
return 0;
}
