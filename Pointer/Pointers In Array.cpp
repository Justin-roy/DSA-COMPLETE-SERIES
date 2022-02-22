#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5] = {1,2,3,4,5};
    cout<<A<<endl;//A == &A[0]; // Address
    cout<<A+1<<endl;//A+1 == A[1]; // Address
    cout<<*A<<endl;//*A == A[0]; // Value
    cout<<*A+1<<endl;//*A+1 == A[1]; // Value
return 0;
}
