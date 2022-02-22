#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<string> name;
    vector<int> mobile_no;
    cout<<"How Many Entry You Want: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<i+1<<". Enter Name: ";
      string s;
      //I'm Using Check because it's ignore first character..
      if(i==0)cin.ignore();
      getline(cin,s);
      name.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
      cout<<"Customer Name: "<<name[i]<<endl;
    }
return 0;
}
