#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
void swap(float &a,float &b)
{
    float temp=a;
    a=b;
    b=temp;

}
void swap(double &a,double &b)
{
    double temp=a;
    a=b;
    b=temp;

}
void swap(long int &a,long int &b)
{
    long int temp=a;
    a=b;
    b=temp;
}
int main()
{
    float a=1.21,b=2.23;
    cout<<"Before Swaping : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swaping : "<<a<<" "<<b<<endl;
    double c=1.21231,d=2.22343;
    cout<<"Before Swaping : "<<c<<" "<<d<<endl;
    swap(c,d);
    cout<<"After Swaping : "<<c<<" "<<d<<endl;
    long int  e=121231,f=222343;
    cout<<"Before Swaping : "<<e<<" "<<f<<endl;
    swap(e,f);
    cout<<"After Swaping : "<<e<<" "<<f<<endl;
}