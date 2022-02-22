#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int X,Y,Z;
//    while(1)//Printing Again And Again
//    {
        X = 0;
        Y = 1;
        do
        {
          cout<<X<<endl;
          Z = X + Y;
          X = Y;
          Y = Z;
        } while (X<90000000000);
    //}
return 0;
}
