#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
protected:
private:
}*Head = NULL;

int main()
{
    cout<<"Address Of Head "<<Head<<endl;
    Node *First = new Node;
    (*First).data = 50;
    First->next = 0;//NULL
    Head = First;
    cout<<"Data = "<<First->data;
    cout<<"\nAddress Of Head "<<Head;
    cout<<"\nAddress of First "<<First;
    delete []First;
    cout<<"\nData = "<<First->data;
return 0;
}
