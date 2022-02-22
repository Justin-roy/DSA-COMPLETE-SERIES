#include <iostream>
using namespace std;
void ToLowerCase(char &c)
{
  int t = (int)c;
  cout<<t;
  if(t>=97)
   c = c + 32;
  else
   c = c - 32;
}
int main()
{
    char a = 'A';
    ToLowerCase(a);
    cout<<a;
return 0;
}
