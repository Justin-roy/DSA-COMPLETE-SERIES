#include <iostream>
using namespace std;
int Multi(int a,int b)
{
   int temp = 0;
    while(b)
    {
      temp += a;
      b--;
    }
  return temp;
}
int RMulti(int a,int b)
{
  //base case
  if(b==0)
    return 0;
  return a + RMulti(a,b-1);
}
int main()
{
   int a,b;
    cout<<"Enter the value of AxB: ";
    cin>>a>>b;
    cout<<RMulti(a,b);
return 0;
}
