#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findDigits(int n) {
    int temp;
    int counter = 0;
    int m = n;
    while(m){
     temp = m % 10;
     m = m/10;
     if(temp != 0 && n % temp == 0) {
                counter++;
            }
    }
    return counter;
}
int main()
{
    int n;
    cout<<"Enter the Value of N: ";
    cin>>n;
    int a = findDigits(n);
    cout<<"Count: "<<a;
    int t = n % 10;
    cout<<endl<<t;
return 0;
}
