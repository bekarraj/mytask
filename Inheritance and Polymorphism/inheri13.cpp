/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Participant
{
public:
    string name;
    Participant(string name="Debarati")
    {
        this->name=name;
    }
    void getname()
    {
        cout<<"Participant name is : "<<name<<endl;
    }
    void operator=(Participant &p2)
    {
        Participant p1;
        name=p2.name;
    }
};
int main()
{
    Participant p1("Rahul"),p2("Arjun");
    p1=p2;
    p1.getname();
}
