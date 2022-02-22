#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the Test Cases: ";
    cin>>T;
    while(T)
    {
        string s;
        int Flag=0;
        cout<<"Enter the String: ";
        cin>>s;
        int N = s.size();
        char x = '*';
        for(int i=0;i<N;i++)
        {
            if(s[i]==x && s[i+1]==x)
                   Flag=1;
        }
        if(Flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        --T;
    }
return 0;
}
