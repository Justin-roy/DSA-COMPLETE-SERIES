#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    //Size Vs Capacity...
    vector<int> v;
    cout<<"Capacity Is: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity Is: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity Is: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity Is: "<<v.capacity()<<endl;
    cout<<"Size Is: "<<v.size()<<endl;
    //Index
    cout<<"Element At Index 1st Is: "<<v.at(1)<<endl;
    cout<<"First Element is: "<<v.front()<<endl;
    cout<<"last Element is: "<<v.back()<<endl;
    // Traversal
    cout<<"Before Pop: ";
    for(int i: v)
      cout<<i<<" ";
    cout<<endl;
    v.pop_back();
    cout<<"After Pop: ";
    for(int j: v)
      cout<<j<<" ";
    cout<<endl;
    cout<<"Before Clear Size Is: "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size Is: "<<v.size()<<endl;
    cout<<"Capacity Is: "<<v.capacity()<<endl;//Capacity is Does not Change

    // Initializing Size in vector..
    vector<int> b(5,0);
    for(int i: b)
      cout<<i<<" ";
    cout<<endl;
return 0;
}
