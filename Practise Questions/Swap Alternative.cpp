#include <iostream>
using namespace std;

void PrintData(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }cout<<endl;
}
void SwapAlternative(int A[],int n)
{
    for(int i=0;i<n;i+=2)
    {
       if(i+1 < n)
       {
         swap(A[i],A[i+1]);
       }
    }
}
int main()
{
    int Even[8] = {5,4,7,3,7,2,1,30};
    int Odd[9] = {1,2,85,3,4,2,3,5,4};
    cout<<"Before Swap: ";
    PrintData(Even,8);
    SwapAlternative(Even,8);
    cout<<"After Swap: ";
    PrintData(Even,8);
    cout<<"Before Swap: ";
    PrintData(Odd,9);
    SwapAlternative(Odd,9);
    cout<<"After Swap: ";
    PrintData(Odd,9);
return 0;
}
