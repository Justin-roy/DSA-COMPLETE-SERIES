#include <iostream>
#include <vector>
using namespace std;
int BruteForceApp(int n)
{
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        cnt++;
    }
  return cnt;
}
int BetterApp(int n)
{
    int cnt = 0;
    for(int i=1;i*i<=n;i++)
    {
      if(n%i==0){
        cnt++;//for i factor
        if(i != n/i)
         cnt++; // (n/i) is also factor
      }
    }
  return cnt;
}
vector<int> BetterApp2(int n)
{
    vector<int> div(n+1);
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j+=i)
       {
         div[j]++;
       }
    }
  return div;
}
int main()
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    cout<<BetterApp(n)<<endl;//10000000
    cout<<BruteForceApp(n)<<endl;
    vector<int> v;
    v = BetterApp2(n);
    for(int i : v)
      cout<<i<<endl;
return 0;
}
