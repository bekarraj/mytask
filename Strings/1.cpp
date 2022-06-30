#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char string1[20], string2[20];
	
	cout << "Enter the first string: ";
	cin >> string1;	
	cout << "\nEnter the second string: ";
	cin >> string2;
    cout<<endl;
    
	if (strcmp(string1, string2) == 0)
	{
		cout << "**Enterd strings are identical**";
	}
	
	else 
	{
		cout << "**Enterd strings are not identical**";
	}

	return 0;
}

