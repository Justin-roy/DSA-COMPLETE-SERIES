#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Para{
 int len;
 int breadth;
};
int Area(struct Para t) // int Area(struct Para &t)
{
    return t.len * t.breadth;
}
void changeLen(struct Para *r,int l)
{
   (*r).len = l;// r->len = l;
}
int main()
{
    struct Para s = {5,2};
    cout<<"Area Is: "<<Area(s);
    changeLen(&s,20);
    cout<<"\nLength: "<<s.len;
}
