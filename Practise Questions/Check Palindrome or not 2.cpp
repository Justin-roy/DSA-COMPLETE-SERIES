#include <iostream>
using namespace std;
char TOlowerCase(char s)
{
   if(s>='0' && s<='9')
    return s;
   else{
   if(s>='a' && s<='z')
    return s;
   else{
    char temp = s - 'A' + 'a';//Converting To LowerCase
   return temp;
   }
   }
}
char IsValidChar(char ch)
{
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    return 'T';
  return 'F';
}
bool CheckPalindrom(string c,int n)
{
   int s = 0;
   int e = n-1;
   while(s<=e)
   {
   if(IsValidChar(c[s]) == 'F'){
     s++;
    }
   else if(IsValidChar(c[e]) == 'F'){
       e--;
   }
    else
    {
     if(TOlowerCase(c[s]) != TOlowerCase(c[e]))
       return 0;
     else
     {
        s++;
        e--;
     }
    }
   }
   return 1;
}
int main()
{
    string s = "N2 i&nJA?a& jnI2n";
    string s1 = "Ababa";
    string s2 = "A1b22Ba";
    string s3 = "5?36@6?35";
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s,s.size());cout<<endl;
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s1,s1.size());cout<<endl;
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s2,s2.size());cout<<endl;
    cout<<"Is Palindrome Or Not: "<<CheckPalindrom(s3,s3.size());
return 0;
}

