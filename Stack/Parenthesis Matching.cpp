#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Isbalance(string s)
{
    int n = s.size();
    stack<char>st;
    bool ans = true;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        st.push(s[i]);
       else if(s[i]==')')
       {
        if(!st.empty() && st.top()=='(')
        st.pop();
        else{
            ans = false;
            break;
        }
       }
       else if(s[i]==']')
       {
        if(!st.empty() && st.top()=='[')
        st.pop();
        else{
            ans = false;
            break;
        }
       }
       else if(s[i]=='}')
       {
        if(!st.empty() && st.top()=='{')
        st.pop();
        else{
            ans = false;
            break;
        }
       }
     }
     return (!st.empty()) ? false : ans;
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    Isbalance(s) ? cout<<"Valid"<<endl : cout<<"Not Valid"<<endl;
return 0;
}
