#include <iostream>
#include <climits>
#include <array>
using namespace std;

int main()
{
    array<int,5> Arr = {1,2,3,4,5};
    int size = Arr.size();
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\nElement At Index 4 is: "<<Arr.at(4)<<endl;
    cout<<"Element Is Empty or Not: "<<Arr.empty()<<endl;
    cout<<"First Element is: "<<Arr.front()<<endl;
    cout<<"last Element is: "<<Arr.back()<<endl;
return 0;
}
