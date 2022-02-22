#include <bits/stdc++.h>
using namespace std;
//#define ll long long
//#define str string
//#define mod 1000000007
void solve(){
	int n;cin>>n;
	int arr[n];
	int i;int count;int j;
	cout<<"Unique elemts in the given array are: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==1){
			cout<<arr[i]<<" ";
		}
	}
}
int main(){
//	#ifndef ONLINE_JUDGE
//	    freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
//	#endif
	   solve();
	return 0;
}

