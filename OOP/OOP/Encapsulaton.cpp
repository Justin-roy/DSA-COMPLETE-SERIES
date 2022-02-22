#include <iostream>
using namespace std;
class Student
{
public:
    //setter function
    void SetData(string name,int age,int roll,int Class)
    {
       this->name = name;
       this->age = age;
       this->roll = roll;
       this->Class = Class;
    }
    //Getter Function
    void GetData()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
      cout<<"Roll: "<<roll<<endl;
      cout<<"Class: "<<Class;
    }
private:
   string name;
   int age;
   int roll;
   int Class;
};

int main()
{
    //Encapsulation Example
    Student st;
    string name;
    int age,roll,Class;
    name = "Justin"; Class = 12;
    age = 18; roll = 05;
    st.SetData(name,age,roll,Class);
    st.GetData();
return 0;
}
