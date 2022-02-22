#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    float avg;
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
      sum += A[i];
    }
    avg = (float)sum/n;
    cout<<"Sum is: "<<sum<<"\n"<<"Avg is: "<<avg;
return 0;
}
