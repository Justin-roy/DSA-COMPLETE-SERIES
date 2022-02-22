#include <iostream>
#include <string>

using namespace std;
string RemoveOccurrence(string s,string part)
{
    while(s.size() != 0 && s.find(part) < s.size())
    {
       s.erase(s.find(part),part.size());
    }
    return s;
}
int main()
{
   string s = "daabcbaabcbc";
   string part = "abc";
   cout<<RemoveOccurrence(s,part);


return 0;
}
