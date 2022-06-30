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
    Person(string name="Debarati")
    {
        this->name=name;
    }
    void getname()
    {
        cout<<"Person name is : "<<name<<endl;
    }

};
class Participant : public Person
{
};
int main()
{
    string s;
    getline(cin,s);
    Person p1(s);
    Participant p;
    p.getname();
}

