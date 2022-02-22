#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void PrintVec(vector<int> v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
      {
          // v.size() -> O(1)
         cout<<v[i]<<" ";
      }
      //v.push_back(58); //If u Push elements to v include &v /*PrintVec(vector<int>&v)*/
      cout<<endl;
}
void PrintVec1(vector<string> v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
      {
          // v.size() -> O(1)
         cout<<v[i]<<" ";
      }
      //v.push_back(58); //If u Push elements to v include &v /*PrintVec(vector<int>&v)*/
      cout<<endl;
}
int main()
{
    vector<int> v(10,6);//10,6 means '10' Indecies and '6' means elements
                        //e.g--> 6 6 6 6 6 6 6 6 6 6
     v.push_back(5);
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++)
//      {
//         int x;
//         cin>>x;
//         PrintVec(v);
//         v.push_back(x);//O(1)
//      }
      PrintVec(v);
       v.pop_back();//Delete last Element...
       PrintVec(v);
       vector <int> v2 = v;/* O(n) *///Copy all elements v to v2;
    // vector <int> &v2 = v; // Its change the elements in v also if u use &v1
       v2.push_back(15);
       PrintVec(v2);
       PrintVec(v);
       cout<<"\n\n**************For String**************\n"<<endl;
       vector<string>str;
       int s;
       cin>>s;
       for(int i=0;i<s;i++)
      {
         string x;
         cin>>x;
         PrintVec1(str);
         str.push_back(x);//O(1)
      }
      PrintVec1(str);
return 0;
}

