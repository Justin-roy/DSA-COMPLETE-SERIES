#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int fib;
    // if user enter one
    n==1 ? fib = 1 : fib = 0;
    for(int i=2;i<=n;i++)
    {
      fib = t1 + t2;
      t1 = t2;
      t2 = fib;
    }
  return fib;
}
int RFibonacci(int n)
{
  //base case
  if(n<=1)
   return n;
  return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter Any Number: ";
    cin>>n;
   cout<<Fibonacci(n);
return 0;
}
