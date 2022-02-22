#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
   //Format : vector <datatype> myvector;
   vector <int> my;
   my.push_back(10);
   my.push_back(11);
   my.push_back(12);
   my.push_back(13);
   my.push_back(14);
   my.push_back(15);
   cout<<"Vector: ";
   for(int i=0;i<my.size();i++){
      // cout<<my.at(i)<<" ";
       // OR
       cout<<my[i]<<" ";
    }
    my.insert(my.begin()+4/*+4 means at Which index you want to insert element*/,16);//add element
    cout<<endl<<"Vector: ";
   for(int i=0;i<my.size();i++){
      // cout<<my.at(i)<<" ";
       // OR
       cout<<my[i]<<" ";
    }
    my.erase(my.begin() +6/* +6 means at Which index you want to delete element*/);//delete element
    cout<<endl<<"Vector: ";
   for(int i=0;i<my.size();i++){
      // cout<<my.at(i)<<" ";
       // OR
       cout<<my[i]<<" ";
    }


    if(my.empty())
    {
        cout<<endl<<"Is Empty!";
    }
    else{
        cout<<endl<<"Is Not Empty!";
    }
    my.clear();
    if(my.empty())
    {
        cout<<endl<<"Is Empty!";
    }
    else{
        cout<<endl<<"Is Not Empty!";
    }
return 0;
}
