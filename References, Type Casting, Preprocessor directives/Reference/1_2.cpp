#include<iostream>
using namespace std;

void myswap(int &a, int &b )
{
int t = a;
   a = b;
   b = t;	
}

int main() 
{ 
   int i,j;
   cout<<"Enter two numbers : ";
   cin>> i >> j;
   cout<<"\n Before Swapping :\n";
   cout<<" i : " << i << "\t" << "j : "<< j<<endl;
   myswap(i,j);
   cout<<"\n After Swapping :\n";
   cout<<" i : " << i << "\t" << "j : "<<j<< endl;
}
