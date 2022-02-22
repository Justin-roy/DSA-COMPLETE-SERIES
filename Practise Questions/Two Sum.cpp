#include <iostream>
#include <vector>
using namespace std;
vector<int> TwoSum(vector<int>&v,int t)
{
    int a=0,b=0;
    for(int i=0;i<v.size()-1;i++)
    {
      for(int j=i+1;j<v.size();j++)
      {
         if(v[i]+v[j] == t)
         {
            a = i;
            b = j;
         }
      }
    }
    return {a,b};
}
int main() {
    vector<int> v = {1,2,3,4,5,6};
    int t = 9;
    vector<int> n;
    n = TwoSum(v,t);
    for(int y : n)
    cout<<y<<" ";
    return 0;
}

