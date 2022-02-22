#include <iostream>
using namespace std;
int FastSquare(int num)
{
   int ans = 0;
   while(num>0)
   {
     int rem = num % 10;
     ans += rem*rem;
     num = num/10;
   }
  return ans;
}
bool HappyNumber(int n)
{
   if(n<=0)
    return 0;
   int slow,fast;
   slow = fast = n;
   do
   {
     slow = FastSquare(slow);
     fast = FastSquare(FastSquare(fast));
   } while (slow != fast);
   if(slow == 1)
    return 1;
   return 0;
}

int main()
{
   int n = 19;
   cout<<HappyNumber(n);
return 0;
}
