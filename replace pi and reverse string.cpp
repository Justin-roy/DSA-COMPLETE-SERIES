#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Reverse(string s)
{
    if(s.length()==0){
        return;
    }
    string str = s.substr(1);
     Reverse(str);
     cout<<s[0];
}
void Replace_pi(string pi)
{
    if(pi.length()==0){
        return;
    }
    if(pi[0]=='p' && pi[1]=='i')
    {
        cout<<"3.14";
        Replace_pi(pi.substr(2));
    }
    else
    {
        cout<<pi[0];
        Replace_pi(pi.substr(1));
    }
}
int main()
{
    Reverse("Binod");
    cout<<endl;
    Replace_pi("pixxpipppi");
    system("pause>0");
return 0;
}

