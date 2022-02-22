#include <iostream>
using namespace std;
char TOlowerCase(char s)
{
   if((s>='a' && s<='z') || (s>='0' && s<='9'))
    return s;
   else{
    char temp = s - 'A' + 'a';//Converting To LowerCase
   return temp;
   }
}
bool IsValidChar(char ch)
{
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    return 1;
  return 0;
}
bool CheckPalindrom(string c)
{
   //Removing faltu char..
    string temp = "";
    for(int i=0;i<c.size();i++)
    {
       if(IsValidChar(c[i]))
        temp.push_back(c[i]);
    }
   //Now Converting to LowerCase and checking valid char..
   int s = 0;
   int e = temp.size() - 1;
   while(s<=e)
   {
      if(TOlowerCase(temp[s]) != TOlowerCase(temp[e]))
        return 0;
      else{
        s++;
        e--;
      }
   }
   return 1;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    string s1 = "race a car";
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s);cout<<endl;
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s1);cout<<endl;
return 0;
}

