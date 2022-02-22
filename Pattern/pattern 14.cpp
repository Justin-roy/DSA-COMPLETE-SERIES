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
int Triangle()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++)
            printf(" ");
        for(int k=2;k<=i;k++)
        printf("* ");
        printf("\n");
    }
    return 0;
}
int Stem()
{
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<8;j++)
            printf(" ");
        for(int k=1;k<=3;k++)
        printf("*");
        printf("\n");
    }
    return 0;
}
int main()
{
    gotoxy(30,0);
    cout<<"Created By Justin Roy";
    for(int i=1;i<=3;i++)
        Triangle();
    Stem();

return 0;
}
