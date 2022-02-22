#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
template <typename T> // 'typename' can always be replaced by 'class' ---> (<typename T> || <class T>)
T Jus(T x, T y){
    return (x>y)?x:y; // if x is greater then Y Print X otherwise Print Y
}
int main()
{
    cout<<Jus<int>(5,8)<<endl;
    cout<<Jus<float>(5.98,4.2)<<endl;
    cout<<Jus<char>('z','a')<<endl;
return 0;
}
