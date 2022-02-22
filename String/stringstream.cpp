#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num = "54";

    stringstream ss;

    ss<<num; // ss store num value..
    int input;
    ss>>input; // now ss give his value to Input...
    cout<<input+2<<endl;
    cout<<num+"2"<<endl;
return 0;
}
