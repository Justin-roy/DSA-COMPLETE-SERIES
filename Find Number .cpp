#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Find_Number(vector<int>&arr,int sum)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++){
        if(arr[i]+arr[j]==sum)
            cout<<"Found\n";
    }
    }

}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter Size of the vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
      {
         int x;
         cin>>x;
         arr.push_back(x);//O(1)
      }
      int sum = 8;
    Find_Number(arr,sum);
return 0;
}

