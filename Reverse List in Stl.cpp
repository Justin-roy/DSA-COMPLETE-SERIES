#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <list>
using namespace std;
void display(list<int> &lst1)
{
    list<int> :: iterator ite;
    for(ite = lst1.begin(); ite != lst1.end(); ite++){
           cout<<*ite<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int>list1;//List of 0 Length
    list1.push_back(2);
    list1.push_back(14);
    list1.push_back(9);
    list1.push_back(4);
    list1.push_back(1);
    cout<<"Before Reverse: ";
    display(list1);
    cout<<"\nAfter Reverse: ";
    list1.reverse();
    display(list1);
return 0;
}
