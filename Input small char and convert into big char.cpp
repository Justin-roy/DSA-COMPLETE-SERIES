#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Upper(char c)
{
    return 'A' + (c - 'a');
}
int main()
{
    while(true){
    cout<<"Write something here in capital letter !"<<endl;
    string s;
   // cin>>s;
   getline(cin,s);

    if(s.size()==0)
    {
        break;
    }
    for(int i=0;i<s.size();++i){
        s[i] = Upper(s[i]);
    }
    cout<<s<<endl;
    cout<<"Hit DOUBLE ENTER to exit"<<endl;
    cin.ignore();
    }
return 0;
}
