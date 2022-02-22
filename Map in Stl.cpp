#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>marksmap;
    marksmap["Justin"]=98;
    marksmap["David"]=38;
    marksmap["Human Robot"]=48;
    map<string, int>:: iterator iter;
    marksmap.insert({{"Hello",47},{"Bye",102}});
    for(iter = marksmap.begin();iter != marksmap.end();iter++){
       cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The Max size is: "<<marksmap.max_size()<<endl;
    cout<<"The Empty's return value is: "<<marksmap.empty()<<endl;
return 0;
}
