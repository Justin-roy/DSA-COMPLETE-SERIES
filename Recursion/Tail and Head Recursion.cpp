#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// IN TAIL RECURSION FIRST PRINT THEN CALL.....
// IN HEAD RECURSION FIRST CALL THEN PRINT....
void Tail_recursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        Tail_recursion(n-1);
    }
}

void Head_recursion(int n)
{
    if(n>0)
    {
        Head_recursion(n-1);
        printf("%d ",n);
    }
}
int main()
{
    cout<<"Tail Recursion = ";
    Tail_recursion(3);
    cout<<"\nHead Recursion = ";
    Head_recursion(3);
return 0;
}

