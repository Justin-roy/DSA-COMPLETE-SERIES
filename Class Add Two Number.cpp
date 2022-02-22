#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Clock
{
public:
    int Hr=0,Min=0;
   void Readtime(int h,int m)
    {
       Hr += h;
       Min += m;
    }
   void Showtime()
   {
      cout<<Hr<<":"<<Min<<endl;
   }
protected:
private:
};

int main()
{
    Clock s;
    s.Readtime(1,15);
    s.Readtime(2,30);
    s.Showtime();
return 0;
}
