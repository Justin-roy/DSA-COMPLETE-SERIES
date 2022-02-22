#include <iostream>
using namespace std;
string removeDuplicate(string s)
{
  int i = 0;
  while(i<s.size())
  {
    if(s[i] == s[i+1] && i+1 < s.size()){
      s.erase(i,2);
      i = 0;
    }
    else
    i++;
  }
  return s;
}
int main()
{
   string s = "abbaca";
   string s2 = "azxxzy";
   cout<<removeDuplicate(s2);
return 0;
}
