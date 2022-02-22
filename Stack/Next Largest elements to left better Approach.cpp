#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is O(N)
vector<int> Next_Largest_To_Right(int A[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
       if(s.size()==0)//if Stack is empty
        v.push_back(-1);
       else if(s.size()>0 && s.top()>A[i])
        v.push_back(s.top());
       else if(s.size()>0 && s.top()<A[i])
       {
           while(s.size()>0 && s.top()<A[i])
            s.pop();
           if(s.size()==0)
            v.push_back(-1);
           else
            v.push_back(s.top());
       }
       s.push(A[i]);
    }
    return v;
}
int main()
{
    vector<int>v2;
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    v2 = Next_Largest_To_Right(A,n);
    for(int i=0;i<v2.size();i++)
    {
      cout<<v2.at(i)<<" ";
    }
return 0;
}


