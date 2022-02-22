#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char Occurrence(string s)
{
    int Arr[26] = {0};
    for(int i=0;i<s.size();i++)
    {
      char ch = s[i];
      int number = ch - 'a';
      Arr[number]++;
    }

    //finding Maximum
    int maxi = -1,ans =0;
    for(int j=0;j<26;j++)
    {
       if(maxi < Arr[j]){
        ans = j;
        maxi = Arr[j];
       }
    }
    char finalAns =  'a' + ans;
    return finalAns;
}
int main()
{
    string s;
    cout<<"Enter Any Sentence have Occurrence: ";
    cin>>s;
    cout<<Occurrence(s);

return 0;
}
