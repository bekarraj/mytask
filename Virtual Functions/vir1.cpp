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
class Base {
      public:
         Base(string s) : str(s) { }
         string getstr() { return str; }
         virtual void show() { cout << str << endl; }
     private:
          string str;
     };

class Der : public Base   {
     public:
        Der(int n, string s) : Base(s), num(n) {  }
        void show()  { cout << " " << num<< endl; }
     private:
          int num;
     };

int main()
{
    Base bobj("hello");
    Base *bptr1 = &bobj;
    Base &bref1 = bobj;

    Der dobj(100,"welcome");
    Base *bptr2=&dobj;
    Base &bref2 = dobj;

    bobj.show();
    dobj.show();
    bptr1->getstr();//1
    bptr2->getstr();//2
    bref1.show();
    bref2.show();
}