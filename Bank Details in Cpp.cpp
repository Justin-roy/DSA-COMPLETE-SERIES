#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int ch;
    do
    {
        cout<<"\n\n\t   Main Menu";
        cout<<"\n\n\t 1.New Account";
        cout<<"\n\n\t 2.Deposit Amount";
        cout<<"\n\n\t 3.Withdraw Amount";
        cout<<"\n\n\t 4.Balance Enquiry";
        cout<<"\n\n\t 5.All Account Holder's List";
        cout<<"\n\n\t 6.Close An Account";
        cout<<"\n\n\t 7.Modify An Account";
        cout<<"\n\n\t 8.Exit";
        cout<<"\n\n\t Select Your Option(1-8): ";
        cin>>ch;
        system("cls");
        switch (ch)
        {
        case 1:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 2:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 3:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 4:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 5:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 6:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 7:
            cout<<"\n\n\n\tEnter The Account No. : ";
            cin>>num;
            break;

        case 8:
            cout<<"\n\n\n\tThanks For Using Bank Management System : ";
            break;

        default:cout<<"\a";
            break;
        }
        cin.ignore();
        cin.get();
    } while (ch!=8);
return 0;
}
