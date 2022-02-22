
#include <iostream>
#include <bits/stdc++.h>
int factorial(int a)
{
    if(a<=1)
    {
        return 1;
    }
    return a*factorial(a-1);
}
// See how its working.........
/*factorial(5) = n*factorial(n-1)
factorial(5) = 5*factorial(4)
factorial(5) = 5*4*factorial(3)
factorial(5) = 5*4*2*factorial(2)
factorial(5) = 5*4*2*factorial(1)
factorial(5) = 5*4*3*2*1 = 120 */
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fact = factorial(n);

    cout<<"The factorial of given no. "<<n<<" is "<<fact;
}
