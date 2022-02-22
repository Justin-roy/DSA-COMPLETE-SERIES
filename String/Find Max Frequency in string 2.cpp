#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name,ch;
    int maxx=0,val=0;
    cout<<"Enter Repeated String: ";
    getline(cin,name);//Sunny
    int n = strlen(name);
 //   for(int i=0;name[i]!='\0';i++)// zero to null character
//    {
        for(int j=0;name[j]!='\0';j++)
        {
            if(name[i]==name[j])
                val++;
        }
        if(maxx<val)
        {
            maxx=val;
            ch=name[i];
        }
    //}
    cout<<"Character '"<<ch<<"' "<<"at "<<maxx<<" times";
return 0;
}

