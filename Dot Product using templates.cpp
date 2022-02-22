#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
template <class J>
class vectorr
{
public:
     J *arr;
    int sizee;
    vectorr(int m)
    {
        sizee = m;
        arr = new J[sizee];
    }
    J dotProduct(vectorr &a)
    {
        J t = 0;
        for(int i=0;i<sizee;i++)
        {
            t += this->arr[i] * a.arr[i];
        }
        return t;
    }
};
int main()
{
    vectorr <float>v1(3);
    v1.arr[0] = 3.2;
    v1.arr[1] = -5.0;
    v1.arr[2] = 5.24;

    vectorr <float>v2(3);
    v2.arr[0] = 2.5;
    v2.arr[1] = 3.6;
    v2.arr[2] = 9.5;
    float b = v1.dotProduct(v2);
    cout<<"Dot Product: "<<b<<endl;
return 0;
}
