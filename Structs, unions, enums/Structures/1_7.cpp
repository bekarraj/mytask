#include <iostream>
#include <cstring>
 
using namespace std;
int CalculateAvg( struct DATA *ptr );
 
struct DATA {
  int num1;
  int num2;
  int num3;
  int average;
};
 
 int n1,n2,n3,avg;
 
int main() 
{
	int a;	 
    struct DATA *ptr, D;
    ptr=&D;

    cout<<"Enter the 1st number:";
    cin>>n1;
    cout<<"Enter the 2nd number:";
    cin>>n2;
    cout<<"Enter the 3rd number:";
    cin>>n3;
    cout<<endl;
    
   D.num1 = n1;
   D.num2 = n2;
   D.num3 = n3;
   
   a = CalculateAvg(ptr);
   cout<<"The average is:"<<a;   
   return 0;
}
int CalculateAvg( struct DATA *ptr)
{	   
       avg = (n1+n2+n3)/3;
	   (*ptr).average = avg; 
	   return avg;
}

