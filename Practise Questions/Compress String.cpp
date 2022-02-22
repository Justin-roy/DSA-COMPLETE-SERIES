#include <iostream>
#include <vector>
using namespace std;
int Compress(vector<char>&chars)
{
   int i = 0;
   int ansIndex = 0;
   int n = chars.size();
   while(i<n)
   {
      int j = i+1;
      while(j<n && chars[i] == chars[j])
        j++;
      // Pushing character
      chars[ansIndex++] = chars[i];
      //counting characters count
      int count = j - i;
      if(count > 1)
      {
        string t = to_string(count);
        for(char ch : t)
         chars[ansIndex++] = ch;
      }
      // j holding next character...
      i = j;
   }
   return ansIndex; // or chars.size()
}
int main()
{
    vector<char> ch = {'a','a','b','b','c','c','c'};
    vector<char> ch1 = {'a'};
    cout<<Compress(ch1);
return 0;
}
