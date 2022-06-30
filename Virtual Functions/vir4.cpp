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
        virtual double computeArea()
        {
            return 0;
        }
        virtual double computePerimeter()
        {
            return 0;
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
        return ((3.14285714+2.0)*radius);
    }

};
int main()
{
    shape *sh;
    Rectangle r(12.0,12.0);
    sh=&r;
    Square s(12.0);
    Circle c(12.0);
    cout<<"Calculating area of Rectangle"<<endl<<
    sh->computeArea()<<endl;
    cout<<"Calculating Perimeter of Rectangle"<<endl<<
    sh->computePerimeter()<<endl;
    sh=&s;
    cout<<"Calculating area of Square"<<endl<<
    sh->computeArea()<<endl;
    cout<<"Calculating perimeter of Square"<<endl<<
    sh->computePerimeter()<<endl;
    sh=&c;
    cout<<"Calculating area of Circle"<<endl<<
    sh->computeArea()<<endl;
    cout<<"Calculating perimeter of Circle"<<endl<<
    sh->computePerimeter()<<endl;

}

