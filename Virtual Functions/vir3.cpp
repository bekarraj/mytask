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
class shape
{
    public:
        double base,heigth,radius;
        shape(double a):radius(a){}
        shape(double a,double b):base(a),heigth(b){}

    double area;
     virtual void display()
    {
        cout<<"area is "<<area<<endl;
    }
};
class Rectangle : public shape
{
    public:
        Rectangle(double a,double b):shape(a,b){}
    double computeArea()
    {
        return base*heigth;
    }
    double computePerimeter()
    {
        return 2*(base+heigth);
    }

};
class Square : public shape
{
    public:
        Square(double s):shape(s){}
    double computeArea()
    {
        return radius*radius;
    }
    double computePerimeter()
    {
        return radius*4;
    }
};
class Circle : public shape
{
    public:
        Circle(double c):shape(c){}
    double computeArea()
    {
        return ((3.14285714)*radius*radius);
    }
    double computePerimeter()
    {
        return ((3.14285714+2)*radius);
    }

};
int main()
{
    Rectangle r(12,12);
    Square s(12);
    Circle c(12);
    cout<<"Calculating area of Rectangle"<<endl<<
    r.computeArea()<<endl;

    cout<<"Calculating area of Square"<<endl<<
    s.computeArea()<<endl;

    cout<<"Calculating area of Circle"<<endl<<
    c.computeArea()<<endl;
    cout<<"Calculating Perimeter of Rectangle"<<endl<<
    r.computePerimeter()<<endl;

    cout<<"Calculating perimeter of Square"<<endl<<
    s.computePerimeter()<<endl;

    cout<<"Calculating perimeter of Circle"<<endl<<
    c.computePerimeter()<<endl;

}

