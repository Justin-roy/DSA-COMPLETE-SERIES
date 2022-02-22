#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    for(int i=n-1;i>=0;i--)
    {
       cout<<A[i]<<" ";
    }
return 0;
}
