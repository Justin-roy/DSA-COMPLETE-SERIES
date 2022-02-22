#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Display(vector <int> &A)
{
    for(int i=0;i<A.size();i++)
    {
        cout<<A.at(i)<<" ";
    }
}
int main()
{
    vector <int> A;
    int n;
    cout<<"Enter The Loop Size: ";
    cin>>n;
    cout<<"Enter Elements: \n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    A.pop_back();
    Display(A);
return 0;
}
