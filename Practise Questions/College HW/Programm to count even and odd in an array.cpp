#include <iostream>
using namespace std;

int main()
{
    int n,even_count,odd_count;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
       if(A[i]%2==0)
        even_count++;
       else
        odd_count++;
    }
    cout<<"Even Count: "<<even_count<<"\n"<<"Odd Count: "<<odd_count;
return 0;
}
