#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string Find_Dup(string s)
{
    if(s.length()==0)
        return "";
    char chR = s[0];
    string ans = Find_Dup(s.substr(1));
    //TO CHECK DUPLICATE
    if(chR==ans[0]){
        return ans;
    }
    //Final Answer
     return (chR+ans);
}
int main()
{
    cout<<Find_Dup("aaaaddhhaarrtrttee");
return 0;
}

