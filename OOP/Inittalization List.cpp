#include <iostream>
using namespace std;
class InitializationList
{
   int a,b;
public:
    //InitializationList Define
    InitializationList(int c,int d):a(c),b(d){}
    void GetDATA()
    {
      cout<<a<<" "<<b;
    }
};

int main()
{
   InitializationList IL(9,8);
   IL.GetDATA();
return 0;
}
