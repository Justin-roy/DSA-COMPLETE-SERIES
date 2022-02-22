#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class binary
{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary :: read(void)
{
    cout<<"Enter a binary number: ";
    cin>>s;
}
void binary :: chk_bin(void)
{
    chk_bin(); // This is called Nesting of member function
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary Format! ";
            exit(0);
        }
    }
}
void binary :: ones_complement(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}
void binary :: display(void)
{
    cout<<"Displaying binary number:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary a;
    a.read();
   // a.chk_bin();
    a.ones_complement();
    a.display();
return 0;
}
