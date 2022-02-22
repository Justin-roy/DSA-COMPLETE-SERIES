#include <iostream>
#include <fstream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
void gotoxy(int x,int y)
{
    COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}
int main()
{
     gotoxy(30,10);
    cout<<"Created By Justin Roy";
    system("pause>0");
return 0;
}
