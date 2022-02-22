#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Palindrome(int n)
{
    int t = 0;
    while(n>0){
    t += n % 10;//11
    n = n/10;//
    }
    int temp = t;
    int sum=0,r;
    while(t>0)
    {
        r=t%10;
        sum=(sum*10)+r;
        t=t/10;
    }
    if(temp==sum)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}
int main()
{
    int n;
    cout<<"Enter the Value of N: ";
    cin>>n;
    Palindrome(n);
return 0;
}
