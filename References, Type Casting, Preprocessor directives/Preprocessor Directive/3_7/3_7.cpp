#include <iostream>
#include"factorial.h"
using namespace std;
int main()
{
cout<<"Factorial Peogram"<<endl<<endl;
int num;
cout<<"Enter a positive integer: "<<endl;
cin>>num;
cout<<"The factorial of " << num << " is: " << factorial(num) <<endl;
return 0;
}
