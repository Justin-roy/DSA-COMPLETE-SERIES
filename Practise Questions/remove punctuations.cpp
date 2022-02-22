#include <iostream>
using namespace std;
int longString(string sen)
{
   int count = 0;
   int Pcount = 0;
   for(int i=0;i<sen.size();i++)
   {
     if(sen[i] == ' '){
        Pcount = count;
        count = 0;
     }
     else
      count++;
   }
   return max(count,Pcount);
}
string StringChallenge(string sen) {
  for(int i = 0; i<sen.length(); i++)
  {
     if(ispunct(sen[i]))
     {
       sen.erase(i--,1);
     }
  }
  int size = longString(sen);
  string temp;
  string Dtemp = "temp";
  for(int j=0;j<size;j++)
  {
     if(sen[j] != ' ')
      temp += sen[j];


  }
  return (temp.size() == size) ? temp : temp;
}
int main()
{
    cout<<StringChallenge("fun&!! time")<<endl;
return 0;
}
