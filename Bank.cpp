#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BankDetails
{
public:
    int size;
    vector<string> name;
    vector<int> pin;
    vector<long long int> money,aadhar,mobile;
    void Show_Details();
    void All_Account();
    void Add_Account();
    void Check_Balance();
    void Deposite();
    void Withdraw();
    void ShowBalance(int p,bool check);
protected:
private:
};

void showmenu()
{
    cout<<"\n\n**************MAIN MENU**************"<<endl;
    cout<<"1. Show Detail"<<endl;
    cout<<"2. Check Balance"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. All Account"<<endl;
    cout<<"6. Add Account"<<endl;
    cout<<"7. Exit"<<endl<<endl;
}
void BankDetails :: Deposite()
{
   long long int mob,dep;
   cout<<"Enter Mobile Number: ";
   cin>>mob;
   cout<<"Enter Amount For Deposite: ";
   cin>>dep;
   //finding User..
   for(int i=0;i<size;i++)
   {
     if(mob == mobile[i])
     {
        money[i] += dep;
        cout<<"\t\t\t\nYour Amount Added To Your Account...";
        system("pause>0");
     }
   }

}
void BankDetails :: Withdraw()
{
   long long int pass,wid;
   cout<<"Enter Account Password: ";
   cin>>pass;
   cout<<"Enter Amount For Deposite: ";
   cin>>wid;
   //finding User..
   for(int i=0;i<size;i++)
   {
     if(pass == pin[i])
     {
        money[i] -= wid;
        cout<<"Your Current Balance: "<<money[i];
        system("pause>0");
     }
   }

}
void BankDetails :: All_Account()
{
    if(name.size() == 0){
    cout<<"1."<<"Customer Details.."<<endl;
    cout<<"Account Holder Name: "<<"Justin Roy"<<endl;
    cout<<"Your Password: "<<"1234"<<endl;
    cout<<"Your Mobile Number: "<<"8409969525"<<endl;
    cout<<"Your Aadhar Number: "<<"123456789102"<<endl;
    cout<<"Current Balance: Rs."<<"1500"<<endl<<endl;
    }
    else{
    for(int i=0;i<size;i++){
    cout<<i+1<<".Customer Details.."<<endl;
    cout<<"Account Holder Name: "<<name[i]<<endl;
    cout<<"Your Password: "<<pin[i]<<endl;
    cout<<"Your Mobile Number: "<<mobile[i]<<endl;
    cout<<"Your Aadhar Number: "<<aadhar[i]<<endl;
    cout<<"Current Balance: Rs."<<money[i]<<endl<<endl;
    }
    }
}
void BankDetails :: Add_Account()
{
    string s;
    long long int p,m,a,mn;
    cout<<"How Many You Want To Add Record: ";
    cin>>size;
    for(int i=0;i<size;i++){
    cin.ignore();
    cout<<"Enter Customer Name: ";
    getline(cin,s);name.push_back(s);
    cout<<"Enter Customer Password: ";
    cin>>p;pin.push_back(p);
    cout<<"Enter Customer Mobile Number: ";
    cin>>m;mobile.push_back(m);
    cout<<"Enter Customer Aadhar Number: ";
    cin>>a;aadhar.push_back(a);
    cout<<"Enter Customer Balance: ";
    cin>>mn;money.push_back(mn);cout<<endl;
    }
}
void BankDetails :: ShowBalance(int pass,bool chk)
{
    int index = 0;
    if(chk){
    for(int i=0;i<pin.size();i++)
    {
       if(pass == pin[i])
        index = i;
    }
    cout<<"1."<<"Customer Details.."<<endl;
    cout<<"Account Holder Name: "<<name[index]<<endl;
    cout<<"Current Balance: Rs."<<money[index]<<endl<<endl;
    }
    else{
    for(int i=0;i<pin.size();i++)
    {
       if(pass == pin[i])
        index = i;
    }
    cout<<"1."<<"Customer Details.."<<endl;
    cout<<"Account Holder Name: "<<name[index]<<endl;
    cout<<"Your Password: "<<pin[index]<<endl;
    cout<<"Your Mobile Number: "<<mobile[index]<<endl;
    cout<<"Your Aadhar Number: "<<aadhar[index]<<endl;
    cout<<"Current Balance: Rs."<<money[index]<<endl<<endl;
    }
}
void BankDetails :: Check_Balance()
{
   int password;
   cout<<"Enter Your Account Password: ";
   cin>>password;
   ShowBalance(password,true);
}
void BankDetails :: Show_Details()
{
   int password;
   cout<<"Enter Your Account Password: ";
   cin>>password;
   ShowBalance(password,false);
}
int main()
{
   BankDetails bd;
   int counter = 0;
   int Password = 1234,pin,option;
   cout<<"***********WELCOME TO JUSTIN BANK***********"<<endl;
   do
    {
      cout<<"Enter Admin Pin: ";
      cin>>pin;
      counter++;
    } while (counter<3 && pin!=Password);

    if(counter<3){
        goto Pass;
    }
    else{
        goto EXIT;
    }
    do{
       Pass:
        showmenu();
        cout<<"Choose Option: ";
        cin>>option;
        system("cls");
    switch (option)
    {
    case 1: bd.Show_Details();
        break;
    case 2: bd.Check_Balance();
        break;
    case 3: bd.Deposite();
        break;
    case 5: bd.All_Account();
        break;
    case 6: bd.Add_Account();
        break;
    }
    }while(option!=7);
  EXIT:
      cout<<"\nYour Account is Blocked!";
        system("pause>0");
return 0;
}
