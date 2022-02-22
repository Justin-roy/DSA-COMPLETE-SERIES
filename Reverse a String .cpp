#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str){

  int len = str.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    swap(str[i],str[n]);
    n = n-1;
  }
  return str;
}
int main()
{
    cout<<reverseWord("Binod");
return 0;
}


