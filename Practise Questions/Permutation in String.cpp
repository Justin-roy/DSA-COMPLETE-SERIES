#include <iostream>
using namespace std;
// Time = O(n) and Space = constant
bool checkWindow(int count1[],int count2[])
{
   for(int i=0;i<26;i++)
   {
     if(count1[i]!=count2[i])
        return false;
   }
   return true;
}
bool Permutation(string s1,string s2)
{
    // Creating Count of s1
    int count1[26] = {0};
    for(int i=0;i<s1.length();i++)
    {
       //finding index
       int index = s1[i] - 'a';
       count1[index]++;
    }
    //Checking for First Window
    int i = 0;
    int kwindow = s1.size();
    int count2[26] = {0};
    while(i<kwindow && i < s2.size())//checking exception
    {
       int index = s2[i] - 'a';
       count2[index]++;
       i++;
    }
    if(checkWindow(count1,count2))
        return 1;
    while(i < s2.size())
    {
       int index = s2[i] - 'a';
       count2[index]++;
       //removing older one;
       int older = s2[i-kwindow] - 'a';
       count2[older]--;
       i++;
       if(checkWindow(count1,count2))
        return 1;
    }
  return false;
}
int main()
{
    string s = "ab";
    string s2 = "eidbaooo";
    string s3 = "eidboaoo";
    cout<<Permutation(s,s2);
return 0;
}
