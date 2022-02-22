#include <iostream>
#define size 5
using namespace std;

//Print Sum Of 2D Array

int main()
{
  int r,c,a[size][size],b[size][size],sum[size][size];
    cout << "Enter the No. Of Row(1 to "<<size<<"): ";
    cin>>r;
    cout << "Enter the No. Of Column(1 to "<<size<<"): ";
    cin>>c;
    cout<<"Enter The Elements Of 1st Matrix\n";
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      cin>>a[i][j];
    }

    cout<<"Enter The Elements Of 2nd Matrix\n";
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      cin>>b[i][j];
    }

    //Adding 2D Matrix
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      sum[i][j] = a[i][j] + b[i][j];
    }

    cout<<"Printing 2D Array\n";
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      cout<<sum[i][j]<<" ";
      cout<<endl;
    }

}

