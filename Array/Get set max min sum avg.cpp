#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
// Get Set Max Min Sum Avg
void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
}
void Reverse(int A[],int n)
{
//    cout<<"In Order Reverse: ";
//    for(int i=n-1;i>=0;i--)
//    {
//       cout<<A[i]<<" ";
//    }
      if(n<0)
        return;
          cout<<A[n]<<" ";
          Reverse(A,n-1);
}
void Get(int A[],int n)
{
    int idx;
    cout<<"Enter index Position You want View (0 to "<<n-1<<" ): ";
    cin>>idx;
    if(idx<n && idx>=0)
        cout<<"Index "<<idx<<" Element is: "<<A[idx]<<endl;
}
void Set(int A[],int n)
{
    int ele;
    cout<<"Enter Element You to Insert: ";
    cin>>ele;
    int idx;
    cout<<"Enter index Position (0 to "<<n-1<<" ): ";
    cin>>idx;
    A[idx] = ele;
    if(idx<n && idx>=0)
        cout<<"Index "<<idx<<" is Replaced by: "<<A[idx]<<endl;
}
void Max(int A[],int n)
{
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
       if(A[i]>m)
        m = A[i];
    }
    cout<<"Maximum is: "<<m<<endl;
}
void Min(int A[],int n)
{
    int m = INT_MAX;
    for(int i=0;i<n;i++)
    {
       if(A[i]<m)
        m = A[i];
    }
    cout<<"Minimum is: "<<m<<endl;
}
void Sum(int A[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum += A[i];
    }
    cout<<"Total Sum is: "<<sum<<endl;
}
void Avg(int A[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum += A[i];
    }
    int avg = sum/n;
    cout<<"Average is: "<<avg<<endl;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    int c;
    do{
    cout<<"\n\n\tArray Created\t\n\n";
    cout<<"1. Display Array"<<endl;
    cout<<"2. Reverse An Array"<<endl;
    cout<<"3. Get the Array Elements"<<endl;
    cout<<"4. Set the Array Elements"<<endl;
    cout<<"5. Find Maximum In a Array"<<endl;
    cout<<"6. Find Minimum In a Array"<<endl;
    cout<<"7. Total Sum"<<endl;
    cout<<"8. Find Average"<<endl;
    cout<<"9. Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>c;
    system("cls");
    switch (c)
    {
    case 1: Display(A,n);
        break;
    case 2: Reverse(A,n-1);
        break;
    case 3: Get(A,n);
        break;
    case 4: Set(A,n);
        break;
    case 5: Max(A,n);
        break;
    case 6: Min(A,n);
        break;
    case 7: Sum(A,n);
        break;
    case 8: Avg(A,n);
        break;
    }
    } while(c<9);
    cout<<"\n\n\tGood Bye Have A Great Day!\t\n\n";
        system("pause>0");
return 0;
}
