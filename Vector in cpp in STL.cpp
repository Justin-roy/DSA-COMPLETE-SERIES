#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector <int> &v)
{
    for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    int Size,ele;
    cout<<"Enter the size of an Array: ";
    cin>>Size;
    vector <int> vec1;
    for(int i=0;i<Size;i++){
        cout<<"Enter an elements to add this vector: ";
        cin>>ele;
        vec1.push_back(ele);
     }
//     vec1.pop_back();
     vector <int> :: iterator iter = vec1.begin();
     display(vec1);
//     vec1.insert(iter,10);
     vec1.insert(iter+1,10);//U can increase Position.....
     //vec1.insert(iter,5,10); // U can send copy to n times.........
     display(vec1);
return 0;
}
