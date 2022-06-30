#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;
class ASCII_Convert
{
 char A[10]; int B[10];
public:
 //get ( );

    friend istream &operator>>(istream &CIN,ASCII_Convert &a)
    {
        cout<<"Enter 10 characters "<<endl;
        for(int i=0;i<10;i++)
        {
            CIN>>a.A[i];
            a.B[i]=int(a.A[i]);
            CIN.ignore();
        }
        return CIN;
    }
    friend ostream &operator<<(ostream &COUT,ASCII_Convert &a)
    {
        cout<<"Entered 10 characters and their ASCII value "<<endl;
        for(int i=0;i<10;i++)
        {
            COUT<<a.A[i]<<" - "<<a.B[i]<<endl;
        }
        return COUT;
    }

 //put ( );

};
int main()
{
   ASCII_Convert a;
   cin>>a;
   cout<<a;
    //a.get ( );
    //a.put ( );
}