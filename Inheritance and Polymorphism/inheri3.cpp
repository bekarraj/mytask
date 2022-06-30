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
    int  age;
    string address;
    Person(string name="Debarati",int age=25,string address="Kolkata")
    {
        this->name=name;
        this->age=age;
        this->address=address;
    }
};
class Student : public Person
{
public:
    int year;
    string course;
    string college_name;
    Student(int year=2022,string course="ECE",string college_name="BPPIMT")
    {
        this->year=year;
        this->course=course;
        this->college_name=college_name;
    }
    void display()
    {
        cout<<name<<" is today "<<age<<" years old and He/She was born in "
        <<address<<"."<<endl<<"In "<<year<<" he/she joined "<<college_name<<" and pursued "<<course<<" course."<<endl;
    }
    ~Student()
    {
        cout<<" His/Her college life is going to end!!! "<<endl;
    }
};
class Employee : public Person
{
public:
    int employee_number;
    string date_of_joining;
    int salary;
    Employee(int employee_number=1092408,string date_of_joining="04/09/2001",int salary=350000)
    {
        this->employee_number=employee_number;
        this->date_of_joining=date_of_joining;
        this->salary=salary;
    }
    void display()
    {
        cout<<name<<" is today "<<age<<" years old and He/She born in "
        <<address<<"."<<endl<<"In "<<date_of_joining<<" He/she joined Wipro and His/Her Employee number is "<<
        employee_number<<" and his/her salary is "<<salary<<endl;
    }
    ~Employee()
    {
        cout<<" His/Her Work life is going to start!!! "<<endl;
    }
};
int main()
{
    Student s;
    s.display();
    cout<<" "<<endl;
    Employee e;
    e.display();
    cout<<" "<<endl;
}


