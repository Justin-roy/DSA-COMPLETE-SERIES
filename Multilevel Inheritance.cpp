#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Grandfather
{
public:
    void setAge(int);
    void getAge(void);
protected:
    int age;
private:
};
void Grandfather :: setAge(int a)
{
    age = a;
}
void Grandfather :: getAge()
{
    cout<<"Grandfather age is: "<<age<<endl;
}
class Father : public Grandfather
{
public:
    void setIncome (int r)
    {
        Income = r;
    }
    void getIncome(void)
    {
        cout<<"Your Income is Rs. "<<Income<<endl;
    }
protected:
    int Income;
private:
};
class child : public Father
{
public:
    void setPass(int);
    void getPass(void)
    {
        cout<<"Your secret Password is "<<Password<<endl;
    }
protected:
    string Password = "Justin01";
private:
};
void child :: setPass(int r)
{
    Password = r;
}
int main()
{
    child c;
    c.setAge(45);
    c.getAge();
    c.setIncome(450012);
    c.getIncome();
    //c.setPass();
    c.getPass();
return 0;
}
