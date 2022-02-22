#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Percendence(char s)
{
    if(s=='+' || s=='-')
        return 1;
    else if(s=='*' || s=='/')
        return 2;
    else if(s=='^')
        return 3;
    return 0;
}
string Convert_into_Postfix(string infix)
{
  stack <char>st;
  int n = infix.length();
  string result;
  for(int i=0;i<n;i++)
  {
      char c = infix[i];
   if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;
     else if(c == '(')
			st.push('(');
     else if(c == ')') {
			while(!st.empty() && st.top() != '(')
			{
				char temp = st.top();
				st.pop();
				result += temp;
			}
			st.pop();
		}
		else {
			while(!st.empty() && Percendence(infix[i]) <= Percendence(st.top()))
            {
				char temp = st.top();
				st.pop();
				result += temp;
			}
			st.push(c);
		}
   }
  while(!st.empty())
  {
      char temp = st.top();
      st.pop();
      result += temp;
  }
  return result;
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    cout<<Convert_into_Postfix(s);
return 0;
}
