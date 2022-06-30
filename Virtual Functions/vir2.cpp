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
class Vehicles
{
public:
    int fw,cars;
    Vehicles(int f=15,int c=10):fw(f),cars(c){}
};
class Four_Wheelers : public Vehicles
{
public:
    void Show()
    {
        cout<<"Enter no of four wheelers availabe : "<<fw<<endl;
    }
};
class Cars : public Four_Wheelers
{
public:
    int sedan,suv;
    Cars(int a=5, int b=5): sedan(a),suv(b){}
    void Show()
    {
        cout<<"Enter no of cars availabe : "<<cars<<endl;
    }

};
class Sedan : public Cars
{
public:
    int s=10;
    void Show(Cars& cref)
    {
        cout<<"Enter no of sedans availabe : "<<cref.sedan<<endl;
    }

};
class SUV : public Cars
{
public:

    void Show(Cars& cref)
    {
        cout<<"Enter no of SUV availabe : "<<cref.suv<<endl;
    }

};
int main()
{
    Vehicles v;
    Four_Wheelers f;
    Cars c;
    Sedan s1;
    SUV s2;
    s1.Four_Wheelers::Show();
    s1.Cars::Show();
    s1.Show(s2);
    s2.Show(s1);

}
