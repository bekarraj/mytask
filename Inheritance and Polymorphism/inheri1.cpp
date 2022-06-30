/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Number
{
public:
    int i=10,s=32000;
    float f=10.54;
};
class Integer : public Number
{
    public: void display()
    {
        cout<<"Integer Number is "<<i<<endl;
    };
};
class FloatingPoint : public Number
{
    public: void display()
    {
        cout<<"Floating Point Number is "<<f<<endl;
    };
};
class Scientific : public Number
{
    public: void display()
    {
        int temp=s,count=0,count1=0;
        while(temp)
        {
            count++;
            temp/=10;
        }
        int ten=1;
        for(int i=1;i<count;i++)
        {
           ten*=10;
        }
        cout<<"scientic Number of "<<s<<" is "<<float(s)/ten<<" x 10^"<<(count-1)<<endl;
    };
};
class Fixed : public Number
{
    public: void display()
    {
        cout<<"fixed Integer is "<<i<<endl;
    };
};
class Animal
{
public:
    string s="i am Animal : ";
};
class Domestic : public Animal
{
    public: void display()
    {
        cout<<s+"Domestic"<<endl;
    };

};
class Dog : public Animal
{
    public: void display()
    {
        cout<<s+"Dog"<<endl;
    };

};
class Dalmation : public Animal
{
    public: void display()
    {
        cout<<s+"Dalmation"<<endl;
    };
};
class Furniture
{
public:
    string s="i am Furniture : ";
};
class Table : public Furniture
{
    public: void display()
    {
        cout<<s+"Table"<<endl;
    };
};
class DiningTable : public Furniture
{
    public: void display()
    {
        cout<<s+"DiningTable"<<endl;
    };
};
class RoundShapedTable : public Furniture
{
    public: void display()
    {
        cout<<s+"RoundShapedTable"<<endl;
    };
};
class RectangleShapedTable : public Furniture
{
     public: void display()
    {
        cout<<s+"RectangleShapedTable"<<endl;
    };
};
class StorageDevices
{
public:
    string s="i am StoreageDevices : ";
};
class Floppy : public StorageDevices
{
    public: void display()
    {
        cout<<s+"Floppy"<<endl;
    };
};
class CD : public StorageDevices
{
    public: void display()
    {
        cout<<s+"CD"<<endl;
    };
};
class MemoryStick : public StorageDevices
{
    public: void display()
    {
        cout<<s+"MemoryStick"<<endl;
    };
};
int main()
{
    Integer i;
    i.display();
    FloatingPoint f;
    f.display();
    Scientific s;
    s.display();
    Fixed fi;
    fi.display();
    Domestic dom;
    dom.display();
    Dog d;
    d.display();
    Dalmation da;
    da.display();
    Table t;
    t.display();
    DiningTable dt;
    dt.display();
    RoundShapedTable rst;
    rst.display();
    RectangleShapedTable rest;
    rest.display();
    Floppy flop;
    flop.display();
    CD cd;
    cd.display();
    MemoryStick ms;
    ms.display();

}
