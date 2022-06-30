/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Vehicles
{
public:
    int fw,cars;
    Vehicles(int f=15,int c=10):fw(f),cars(c){}

};
class Four_Wheelers : public Vehicles
{
public:
    void display()
    {
        cout<<"Enter no of four wheelers availabe : "<<fw<<endl;
    }
};
class Cars : public Four_Wheelers
{
public:
    int sedan,suv;
    Cars(int a=5, int b=5): sedan(a),suv(b){}
    void display()
    {
        cout<<"Enter no of cars availabe : "<<cars<<endl;
    }

};
class Sedan : public Cars
{
public:
    void display()
    {
        cout<<"Enter no of sedans availabe : "<<sedan<<endl;
    }

};
class SUV : public Cars
{
public:
    void display()
    {
        cout<<"Enter no of SUV availabe : "<<suv<<endl;
    }

};
int main()
{
    Sedan s1;
    SUV s2;
    s1.Four_Wheelers::display();
    s1.Cars::display();
    s1.display();
    s2.display();

}
