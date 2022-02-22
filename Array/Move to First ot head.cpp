#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class LinearSearch
{
public:
    int Arr[100];
protected:
private:
};

void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Transposition_Search(LinearSearch A[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
       if(k==A->Arr[i]){
        //Swap(&A->Arr[i],&A->Arr[0]);//Moving Head/First
        Swap(&A->Arr[i],&A->Arr[i-1]);//Moving to One place Backward
        return i;
       }
    }
    return -1;
}
void Display(LinearSearch A[],int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<A->Arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    LinearSearch A[n];
    for(int i=0;i<n;i++)
    {
       cin>>A->Arr[i];
    }
    int k;
    cout<<"Enter Elements you want to Find: ";
    cin>>k;
    cout<<"Index Position: "<<Transposition_Search(A,n,k)<<endl;
    Display(A,n);
return 0;
}

