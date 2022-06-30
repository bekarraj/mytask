#include <iostream>
using namespace std;
 
void vowelStoz(char *str)
{
   for(int i=0; str[i]!='\0'; i++)
   {
     if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
		 str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
         {
          str[i]=' ';
         }
    }
        cout<<"\nString after deleting vowels: "<<str; 
 } 
 
int main()
{ 
	char str[50];
	cout<<"Enter the string: ";
	cin>>str;
    vowelStoz(str);   
	return 0; 
}

