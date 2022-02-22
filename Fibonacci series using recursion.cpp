#include <iostream>
#include <bits/stdc++.h>
int fibonacci(int a)
{
    if(a<2)
    {
        return 1;
    }
    return fibonacci(a-2) + fibonacci(a-1);
}
// See how its working.........
/*fibonacci(5) = fibonacci(a-2) + fibonacci(a-1)
fibonacci(5) = fibonacci(5-2) + fibonacci(5-1)
fibonacci(5) = fibonacci(3) + fibonacci(4)
fibonacci(5) = 3+4+1 + fibonacci(2)
fibonacci(5) = 3+4+1 = 8 */
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fib = fibonacci(n);

    cout<<"The Fibonacci of given no. "<<n<<" is "<<fib;
}
