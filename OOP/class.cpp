#include <iostream>
using namespace std;
class Class
{
public:

    void GetData(int a,int b)
    {
       a = a;
       b = b;
      /* this.a = a;
       this.b = b; */
       cout<<a<<" "<<b;
    }
private:
    int a,b;
};

int main()
{
    Class c;
    c.GetData(8,5);
return 0;
}
