#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
