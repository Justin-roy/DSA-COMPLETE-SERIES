#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int data1;
    float data2;
public:
    void setData(int a,float b)
    {
        data1 = a;
        data2 = b;
    }
    void getData(void)
    {
        cout<<"The Code of Item Is: "<<data1<<endl;
        cout<<"Item Price Is Rs. "<<data2<<endl<<endl;
    }
protected:
private:
};

int main()
{
    int Size = 4,p,i;
    float q;
    Shop *ptr = new Shop[Size];
    Shop *ptrtemp = ptr;//If u Use pointer again then initialize like this...... Shop *ptrtemp = ptr
    for(i=0;i<Size;i++){
       cout<<"Enter the Item No. and Price (price in float) "<<i+1<<endl;
       cin>>p>>q;
       ptr->setData(p,q);
       ptr++;
    }
    for(i=0;i<Size;i++){
        cout<<"Item No. "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }
return 0;
}
