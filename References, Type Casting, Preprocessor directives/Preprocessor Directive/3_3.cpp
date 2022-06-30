#include<iostream>
#define CASE_CHANGE(s) ((s[i] >= 'a' && s[i] <= 'z')? (s[i] = s[i] -32):0)
using namespace std;
int main()
{  
	char s[100];
	cin>>s;
	for (int i = 0; s[i]!='\0'; i++)
        CASE_CHANGE(s);
    cout<<"Case Converted string is "<<s;    
}

	
	
