#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 3 6 8 8 10 12 15 15 15 20
/*
 Time Complexity of this Code is O(n)
 but we use Sort() then the Time Complexity of this Code is O(nlogn)
 that is Greater the O(n) [O(nlogn) > O(n)].
*/
void Find_Dup(int A[],int n)
{
    int j = 0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
          j = i+1;
          while(A[j] == A[i]) j++;
          cout<<"Duplicate "<<A[i]<<" Present at "<<j-i<<" Times"<<endl;
          i = j-1;
        }

    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    //sort(A,A+n);
    Find_Dup(A,n);
return 0;
}

