#include <iostream>
using namespace std;
//This Function using extra space
// Time/Space is O(n)
string RemoveSpace(string s)
{
    string temp = "";
    for(int i=0;i<s.size();i++)
    {
       if(s[i]==32){
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
       }
       else
        temp.push_back(s[i]);
    }
    return temp;
}
int main()
{
   // Space Ascii is 32
   string s = "My Name is Justin";
  cout<<RemoveSpace(s);
return 0;
}
