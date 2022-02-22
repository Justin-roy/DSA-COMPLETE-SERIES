#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Bankdeposite
{
    int Principle;
    int Year;
    float InterestRate;
    float Returnvalue;
public:
    Bankdeposite(){}
    Bankdeposite(int p,int y,float r);//rate in float is 0.04
    Bankdeposite(int p,int y,int R);//rate in integer is 4
    void Display();

protected:
private:
};
Bankdeposite::Bankdeposite(int p,int y,float r){
        Principle = p;
        Year = y;
        InterestRate = r;
        Returnvalue = Principle;
        for(int i=0;i<y;i++)
        {
            Returnvalue = Returnvalue * (1+InterestRate);
        }
}
Bankdeposite::Bankdeposite(int p,int y,int R){
        Principle = p;
        Year = y;
        InterestRate = (float)R/100;
        Returnvalue = Principle;
        for(int i=0;i<y;i++)
        {
            Returnvalue = Returnvalue * (1+InterestRate);
        }
}
void Bankdeposite :: Display(){
    cout<<"Principle Amount was "<<Principle<<" And Return value after "
    <<Year<<" Years is: "<<Returnvalue<<endl;
}
int main()
{
    Bankdeposite bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y r: ";
    cin>>p>>y>>r;
    bd1 = Bankdeposite(p,y,r);
    bd1.Display();
    cout<<"Enter the value of p y R: ";
    cin>>p>>y>>R;
    bd2 = Bankdeposite(p,y,R);
    bd2.Display();
return 0;
}
