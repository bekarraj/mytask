/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ostream>
#include <istream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;
class String
{

public:
    string s;
    String():s("Hello"){}
     friend String operator+(String s1,string i)
    {
        String s2;
        s2.s=s1.s+i;
        return s2;
    }
    friend String operator+(string i,String s1)
    {
        String s2;
        s2.s=s1.s+i;
        return s2;
    }
    void display()
    {
        cout<<"String is "<<s<<endl;
    }
};
int main()
{
    String    s1,  s2;
    s1.display();
    s2 = s1 + "sample";
    s2.display();
    s2 = "sample" + s1;
    s2.display();

}

