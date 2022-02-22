#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Postfix_Conver(string s)
{
    stack <int> st;
    int n = s.length();
    int x1,x2,Result;
    for(int i=0;i<n;i++)
    {
         if(s[i] >= '0' && s[i] <= '9'){
              st.push(s[i]-'0');
          }
          else
          {
              x2 = st.top();
              st.pop();
              x1 = st.top();
              st.pop();
              switch (s[i])
              {
              case '+':Result = x1+x2;st.push(Result);
                  break;
              case '-':Result = x1-x2;st.push(Result);
                  break;
              case '*':Result = x1*x2;st.push(Result);
                  break;
              case '/':Result = x1/x2;st.push(Result);
                  break;
              }

          }

    }
    return st.top();
}
int main()
{
    string s = "35*62/+4-";
    cout<<Postfix_Conver(s);
return 0;
}
