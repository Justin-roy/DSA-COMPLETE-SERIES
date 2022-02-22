#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isPlaindrome(string S)
	{
	    // Your code goes here
	    string t = S;
//	    int sizee = S.size();
//	    char r[sizee];
//	    int j=0;
//	    for(int i=S.size()-1;i>=0;i++){
//           r[j] = S[i];
//           j++;
//	    }
//	    cout<<r;
       reverse(S.begin(),S.end());
       return (t==S) ? 1 : 0;

	}
int main()
{
    int t;
    cout<<"Enter the Loop Time: ";
    cin>>t;
    while(t)
    {
        string s;
        cout<<"Enter the String: ";
        cin>>s;
        cout<<isPlaindrome(s);
    }
return 0;
}
