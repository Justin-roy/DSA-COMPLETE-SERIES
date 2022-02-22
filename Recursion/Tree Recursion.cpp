#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Tree_recursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        Tree_recursion(n-1);
        Tree_recursion(n-1);
       // printf("\n%d ",n);
    }
}
int main()
{
    Tree_recursion(3);
return 0;
}

