#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Date
{
private:
    int day;
    int mth;
    int year;
public:
   // Date() : day(0), mth(0), year(0) { }
    Date(int d=0, int m=0, int y=0) : day(d), mth(m), year(y) { }
    friend Date operator +(Date &d,int n)  // increment date by n days
    {
        Date d1;
        d1.day=d.day+n;
        d1.mth=d.mth;
        d1.year=d.year;
        return d1;
    }
    friend Date operator -(Date &d,int n)  // decrement date by n days
    {
        Date d1;
        d1.day=d.day-n;
        d1.mth=d.mth;
        d1.year=d.year;
        return d1;
    }
    void setDate(int d, int m, int y)
    {
        day=d;
        mth=m;
        year=y;
    }
    void display()
    {
        cout<<"Data : "<<day<<" Month : "<<mth<<" Year : "<<year<<endl;
    }
};
int main()
{
    Date d(4,9,2001),d1;
    d1.setDate(4,9,2001);
    d1=d+5;
    d1.display();
    d1=d1-2;
    d1.display();
}