#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initcounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop :: setPrice(void)
{
    cout<<"Enter Id of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item  "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void)
{
    for(int i=0;i<counter;i++){
        cout<<"The Item Id is "<<itemId[i]<<" And Price is Rs."<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
return 0;
}
