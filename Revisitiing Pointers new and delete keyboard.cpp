#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Basic example
    int a = 7;
    int* ptr = &a;
    cout<<"The value of a is: "<<*(ptr)<<endl;
    // New keyboard / Operator
   // int *p = new int(89);
      float *p = new float(89.13);
    cout<<"The value at Address p is: "<<*(p)<<endl;
    int *arr = new int[4];
    arr[0] = 8;
    *(arr+1) = 9;
    //arr[1] = 9;
    arr[2] = 4;
    arr[3] = 2;
 // Delete keyboard / Operator
    delete arr;
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;
    cout<<"The value of arr[3] is: "<<arr[3]<<endl;

return 0;
}
