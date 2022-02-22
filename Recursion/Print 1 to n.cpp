#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define N 20
//int n=1;
//void Print1();
//void Print()
//{
//    if(n<=N){
//    cout<<n<<" ";
//    n++;
//    Print1();
//    }
//    else
//        return;
//}
//void Print1()
//{
//    if(n<=N){
//    cout<<n<<" ";
//    n++;
//    Print();
//    }
//    else
//        return;
//}
void Print(int n)
{
    if(n<1)
      return;
    Print(n-1);
    cout<<n<<" ";
}
int main()
{
    int n=10;
    Print(n);
return 0;
}

