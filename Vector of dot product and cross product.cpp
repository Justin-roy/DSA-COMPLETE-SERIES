#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#define n 3
using namespace std;
int dotProduct(int vect_A[],int vect_B[]){
    int pt=0;
    for(int i=0;i<n;i++)// defined n 3 In header file
    {
        pt = pt + vect_A[i] * vect_B[i];
    }
    return pt;
}
void crossProduct(int vect_A[],int vect_B[],int pot[])
{
        pot[0] = (vect_A[1] * vect_B[2]) - (vect_A[2] * vect_B[1]);
        pot[1] = (vect_A[2] * vect_B[0]) - (vect_A[0] * vect_B[2]);
        pot[2] = (vect_A[0] * vect_B[1]) - (vect_A[1] * vect_B[0]);
}
int main()
{
   int vect_A[] = {3,-5,4};
    int vect_B[] = {2,6,5};
    int pot[n];
    cout<<"Dot Product: ";
    cout<<dotProduct(vect_A,vect_B)<<endl;

    cout<<"Cross Product: ";
    crossProduct(vect_A,vect_B,pot);
    for(int i=0;i<n;i++) // defined n 3 In header file
    {
        cout<<pot[i]<<" ";
    }
return 0;
}
