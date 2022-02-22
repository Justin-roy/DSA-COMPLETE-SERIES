#include <iostream>
#include <bits/stdc++.h>
using namespace std;
static int A[10];
static char res[10];
void Permutation(string s,int k)
{
    if(s[k]=='\0')
    {
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
    for(int i=0;s[i]!='\0';i++)
    {
        if(A[i]==0)
        {
            res[k] = s[i];
            A[i]=1;
            Permutation(s,k+1);
            A[i]=0;
        }
    }
    }
}
int main()
{
    string s="ABC";
    int k=0;
    Permutation(s,k);
return 0;
}
