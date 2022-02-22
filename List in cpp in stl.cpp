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
    list<int>list2(5);//Empty List of size 5
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(10);
    display(list1);
    cout<<"delete last element."<<endl;
    list1.pop_back();//delete last element.
    display(list1);
    cout<<"delete first element."<<endl;
    list1.pop_front();//delete first element.
    display(list1);
    cout<<"delete given element."<<endl;
    list1.remove(6);//delete given element.
    display(list1);
    /*list<int>::iterator iter;
    iter = list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";*/
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
    display(list2);
return 0;
}
