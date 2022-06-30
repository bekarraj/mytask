#include <iostream>
using namespace std;

int main()
{
   int num[10];
   int *ptr[10];
   int i;
   cout<<"Enter the 10 elements in array:";
   for(i=0;i<=9;i++)
   {
      cin>>num[i];  	 
   }      
   
      for(i=9;i>=0;i--)
   {
      ptr[i] = &num[i];  	 
   } 
   cout<<"Reverse order : ";
         for(i=9;i>=0;i--)
   {
      cout<<*ptr[i]<<" ";
    }
   return 0;
}

