/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Sample
{
public:
    int  intdata;
    string stringdata;
    Sample()
    {
        intdata=33;
        stringdata="Debarati";
    }
    void setData(int n,string s)
    {
        intdata=n;
        stringdata=s;
    }
    int getintData()
    {
        return intdata;
    }
    string getstringData()
    {
        return stringdata;
    }
    char charat(int a)
    {
        return stringdata[a];
    }
    int reverse()
    {
        int temp=intdata;
        int rev=0;
        while(temp)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        return rev;
    }
    ~Sample()
    {
        cout<<"Sample class Work is done"<<endl;
    }
};
int main()
{
    Sample s;
    s.setData(1092408,"Welcome to wipro");
    cout<<"Intdata is "<<s.getintData()<<endl;
    cout<<"stringdata is "<<s.getstringData()<<endl;
    int n;
    cout<<"Enter the index of the string : ";
    cin>>n;
    cout<<s.charat(n)<<endl;
    cout<<s.reverse()<<endl;
}
