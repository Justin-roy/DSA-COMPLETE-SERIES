#include <iostream>
#include <vector>
using namespace std;
vector<int> AllDuplicate(vector<int>&A)
{
   vector<int>v;
   int i = 0;
    while(i<A.size())
    {
       int CurrentIndex = A[i] - 1;
       if(A[i] != A[CurrentIndex])
          swap(A[i],A[CurrentIndex]);
       else
        i++;
    }
    for(int y=0;y<A.size();y++)
    {
       if(A[y] != y+1)
        v.push_back(A[y]);
    }
    return v;
}
int main()
{
   vector<int> v{4,3,2,7,8,2,3,1};
   vector<int> v1{1,1,2};
   vector<int> v2{1};
  vector<int>t;
  t = AllDuplicate(v);
  for(int i=0;i<t.size();i++)
  {
    cout<<t.at(i)<<" ";
  }cout<<endl;
return 0;
}
