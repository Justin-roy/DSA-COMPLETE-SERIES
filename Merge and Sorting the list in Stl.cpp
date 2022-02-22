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
    cout<<"Before Sort: ";
    display(list1);
    cout<<"\nAfter Sort: ";
    list1.sort();
    display(list1);
    list<int>list2(5);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 9;
    iter++;
    *iter = 2;
    iter++;
    *iter = 6;
    iter++;
    *iter = 79;
    iter++;
    *iter = 29;
    iter++;
    cout<<endl<<"List 2 Displaying: ";
    display(list2);
    list2.sort();
    cout<<endl<<"Merging List1 and List2: ";
    list1.merge(list2);
    display(list1);
return 0;
}
