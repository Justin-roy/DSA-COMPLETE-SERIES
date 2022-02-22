#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=257;//int is 4byte
    char ch = (char)a + 'a';//char is 2 byte
    cout<<ch<<endl;
    //so in little endians char 1 byte and int 4 byte
return 0;
}
