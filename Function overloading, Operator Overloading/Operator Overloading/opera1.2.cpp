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
    //Date() : day(0), mth(0), year(0) { }
    Date(int d=0, int m=0, int y=0) : day(d), mth(m), year(y) { }
    friend Date operator++(Date &d)
    {
        Date d1;
        d1.day=d.day+1;
        d1.mth=d.mth+1;
        d1.year=d.year+1;
        return d1;
    }
    friend Date operator++(Date &d, int)
    {
        Date d1;
        d1.day=d.day+1;
        d1.mth=d.mth+1;
        d1.year=d.year+1;
        return d1;
    }
    friend Date operator--(Date &d)
    {
        Date d1;
        d1.day=d.day-1;
        d1.mth=d.mth-1;
        d1.year=d.year-1;
        return d1;
    }
    friend Date operator--(Date &d,int)
    {
        Date d1;
        d1.day=d.day-1;
        d1.mth=d.mth-1;
        d1.year=d.year-1;
        return d1;
    }
    void display()
    {
        cout<<"Date : "<<day<<" Month : "<<mth<<" Year : "<<year<<endl;
    }
};
int main()
{
    Date d1(31,1,2010), d2(1,10,2005);
    Date d3, d4, d5;
    d5 = --d2;
    d3 = ++d1;
    d3 = d1++;
    d4 = d2--;
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    d5.display();
}