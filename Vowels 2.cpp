#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;

    while(a--)
    {
        int h=0;
        string s;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='A'||s[i]=='a')
            h++;
            else if(s[i]=='E'||s[i]=='e')
            h++;
            else if(s[i]=='I'||s[i]=='i')
            h++;
            else if(s[i]=='O'||s[i]=='o')
            h++;
            else if(s[i]=='U' ||s[i]=='u')
            h++;
        }
        if(h>=5)
        cout<<"lovely string"<<endl;
        else
        cout<<"ugly string"<<endl;
    }
    return 0;
}

