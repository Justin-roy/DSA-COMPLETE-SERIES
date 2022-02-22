#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
//for(int i=0;i<=N;i++)
//{
//	if(i==N){
//	cout<<"Patlu";
//	break;
//	}
//	else if (i*2==N){
//	cout<<"Motu";
//	break;
//	}
//}
    int i=1;
    while((N/(3*i))>0){
        N-=3*i;
        ++i;
   }
    (N<=i) ?cout << "Patlu" :cout <<"Motu";
return 0;
}
