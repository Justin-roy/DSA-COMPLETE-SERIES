#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1 = "Justin";
     int counter=0;
     while(counter<3 && s!=s1){
        cout<<"Enter Your Password: ";
        getline(cin,s);
        if(s1.compare(s)==0)
        cout<<"Unlock ";
        ++counter;
     }
     if(counter<3)//if(s==s1)
        cout<<"Welcome!";
    else
        cout<<"Good Bye!";
return 0;
}
