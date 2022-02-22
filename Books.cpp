#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Book
{
public:
    string id[5];
    int Price[5];
    string Books_name[5];
protected:
private:
};

int main()
{
    Book b;
    for(int i=0;i<5;i++)
    {
       cout<<"Enter Book Name: ";
       cin>>b.Books_name[i];
       cout<<"Enter the Price: ";
       cin>>b.Price[i];
       cout<<"Enter the Id: ";
       cin>>b.id[i];
    }
    for(int i=0;i<5;i++)
    {
      if(b.Price[i]<1000){
      cout<<b.Books_name[i]<<endl;
      cout<<b.Price[i]<<endl;
      cout<<b.id[i]<<endl;
      }
    }
return 0;
}
