#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=9;
    int *ptr=&a;
    cout<<"int a=9 "<<endl;
    cout<<"Sizeof(int) is "<<sizeof(int)<<" byte"<<endl;
    cout<<"Address of ptr: "<<ptr<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value of a: "<<*ptr<<endl;
    *ptr=5;
    cout<<"Changed value of a: "<<*ptr;
    cout<<"\n"<<"Changed value of a: "<<a;
    cout<<"\n*************\n";
    ptr+=1;
    cout<<*ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<a;
    cout<<"\n*************\n";
    int b[10];
    b[0]=90;
    b[1]=98;
    cout<<"print first element address that is b[0]: "<<b<<endl;//print first element address that is b[0]
    cout<<"Its print first element value that is b[0]: "<<*b<<endl;//Its print first element value that is b[0]
    cout<<"print second element address that is b[1]: "<<b+1<<endl;//print second element address that is b[1]
    cout<<"Its add first element : "<<*b+5<<endl;//Its add first element that is //*b+5//b[0]+5//90+5=95
    cout<<"print second element value that is b[1]: "<<*(b+1)<<endl;//print second element that is b[1]
    cout<<"********** DOUBLE POINTERS **********"<<endl;
    int *p;
    int **pp;
    int ab=90;
    cout<<" int ab=90 "<<endl;
    p=&ab;
    pp=&p;
    cout<<"Value of ab: "<<ab<<endl;
    cout<<"Address of ab: "<<&ab<<endl;
    cout<<"Address of p: "<<&p<<endl;
    cout<<"Its Print Address of ab: "<<p<<endl;//Its Print Address of ab
    cout<<"Its print Address of p: "<<pp<<endl;//Its print Address of p
    cout<<"Its print value of ab: "<<*p<<endl;//Its print value of ab
    cout<<"Its print address of ab: "<<*pp<<endl;//Its print address of ab
    // lets see how pp means address of &p and now *pp means value at address p
                    //Jo address P may store hai uska value ........
    cout<<"Its Print Value of ab: "<<**pp<<endl;
    **pp=120;
    cout<<"Changed value of ab: "<<ab;
return 0;
}
