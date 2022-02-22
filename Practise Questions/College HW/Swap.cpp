#include <iostream>
using namespace std;
void Swap(int &a,int &b)
{
   // With Using Third Variable
   int t = a;
   a = b;
   b = t;
}
void Swap2(int &a,int &b)
{
   // Without Using Third Variable
   a = a + b;//a become 15
   b = a - b;//b become 5
   a = a - b;//a become 10
}
int main()
{
    int a = 5;
    int b = 10;
    Swap2(a,b);
    cout<<a<<" "<<b;
return 0;
}
