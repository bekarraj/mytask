#include <iostream>
using namespace std;
 
int mystrlen(char *str)
{
	int i = 0;
    while (str[i])
    {
	
        i++;
    }
	return i;
 } 
 
int main()
{ 
	char *str = new char [10];
	cout<<"Enter the string: ";
	cin>>str;
	int i=mystrlen(str);
    cout<<"The length of the string is:"<<i;
}

