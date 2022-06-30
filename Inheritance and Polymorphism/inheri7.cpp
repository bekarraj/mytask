/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Person
{
public:
    string name;
private:
    int age;
    string contact_number;
    string gender;
public:
    Person(string name="Debarati Dasgupta",int age=5,string contact_number="8617712825",string gender="female")
    {
        this->name=name;
        this->age=age;
        this->contact_number=contact_number;
        this->gender=gender;
    }
    void setPersonDetails();
    void getPersonDetails();
};
void Person::setPersonDetails()
{

    cout<<"Enter your Name : ";
    getline(cin,name);
    cout<<"Enter your age : ";
    cin>>age;
    cin.ignore();
    cout<<"Enter your contact number : ";
    cin>>contact_number;
    cin.ignore();
    cout<<"Enter Your gender : ";
    cin>>gender;
}
void Person::getPersonDetails()
{
    cout<<"Entered Name : ";
    cout<<name<<endl;
    cout<<"Entered age : ";
    cout<<age<<endl;;
    cout<<"Entered contact number : ";
    cout<<contact_number<<endl;
    cout<<"Entered gender : ";
    cout<<gender<<endl;
}
class Student : public Person
{
public:
    string Uname;
    string stream;
    Student()
    {
        Uname="MAKAUT";
        stream="ECE";
    }
    void setStudentDetails()
    {
        cin.ignore();
        cout<<"Enter your University name : ";
        getline(cin,Uname);
        cout<<"Enter your Stream : ";
        getline(cin,stream);
    }
    void getStudentDetails()
    {
        cout<<"Entered University name : ";
        cout<<Uname<<endl;
        cout<<"Entered Stream : ";
        cout<<stream<<endl;
    }
};
class University : public Student
{
public:
    void display()
    {
        getPersonDetails();
        getStudentDetails();
    }
};
class Beverages
{
public:
    int c=10;
    int b=10;

};
class Coffee : public Beverages
{
public:
    void display()
    {
        cout<<"No of coffees available : "<<c<<endl;
    }

};
class Breakfast : public Coffee
{
public:
    void display()
    {
        cout<<"No of Breakfasts available : "<<b<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;
     cin.ignore();
    University u[n];
    for(int i=0;i<n;i++)
    {
        u[i].setPersonDetails();
        u[i].setStudentDetails();
    }
    for(int i=0;i<n;i++)
    {
        u[i].display();
    }
    Breakfast b;
    b.Coffee::display();
    b.display();

}
