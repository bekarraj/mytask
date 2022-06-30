/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Chart
{
public:
    virtual void plotchart()=0;
};
class PieChart : public Chart
{
public:
    void plotchart()
    {
        cout<<"class PieChart Invoked...!!!"<<endl;
    }
};
class BarChart : public Chart
{
public:
    void plotchart()
    {
        cout<<"class BarChart Invoked...!!!"<<endl;
    }
};
int main()
{
    Chart *c;

    PieChart p;
    BarChart b;
    c=&p;
    c->plotchart();
    c=&b;
    c->plotchart();
}



