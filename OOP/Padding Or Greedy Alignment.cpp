#include <iostream>
using namespace std;
class Padding
{
   int a;//4
   char c;//1
};//Our Output is 5 but is 8
class Padding1
{
   int a;//4
   char b;//1
   char c;//1
   char d;//1
   char e;//1
};//Our Output is 8 that correct
class Padding2
{
   int a;//4
   char b;//1
   char c;//1
   int d;//4
   char e;//1
};//Our Output is 5 but is 8

int main()
{
    Padding a;
    //So Overall Size of a is 5 bit but
    // in this case size of a is 8
    //because in c/c++ memory divided
    //into 4 bits of each blocks..
    cout<<"Size of A is: "<<sizeof(a);
return 0;
}
