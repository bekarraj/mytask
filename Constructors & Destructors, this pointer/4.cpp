#include<iostream>
using namespace std;
class Sample
{
   private:
     int x;
     double y;
   public:
   	 Sample()              //Constructor 1
   	 {
   	    x = 0;
		y = 0;
		cout<<"Constructor 1 : ";
		cout<< x << " " << y <<endl;	
	 }
   	 Sample(int s)          //Constructor 2
   	 {
   	 	x = s;
   	 	y = 0;
   	 	cout<<"Constructor 2 : ";
   	 	cout<< x << " " << y <<endl;
	}
   	 Sample(int s,int d)      //Constructor 3
   	 {
   	 	x = s;
   	 	y = d;
   	 	cout<<"Constructor 3 : ";
   	 	cout<< x << " " << y <<endl;
     }
   	 Sample(int s,double d)   //Constructor 4
   	 {
   	 	x = s;
   	 	y = d;
   	 	cout<<"Constructor 4 : ";
   	 	cout<< x << " " << y <<endl;
	 }
};

int main()
{
	
    Sample a;
	Sample b(10);
	Sample c(20,30);
	Sample d(40,50.55);
	return 0;	
}
