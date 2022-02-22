#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    float Current_Amount;
    float ch=  0.50;
    cout<<"Enter You Amount: ";
    cin>>A;
    cout<<"Enter Your Current Balance: ";
    cin>>Current_Amount;
    if(A%5==0 && A<Current_Amount)
    {
       float s = Current_Amount - A;
       //cout<<s-ch;
       printf("%.2f",s-ch);
    }
    else if(A>Current_Amount)
        printf("%.2f",Current_Amount);
    else
        printf("%.2f",Current_Amount);
return 0;
}
