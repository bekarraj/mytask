#include <iostream>
using namespace std;
 
string convert(string s)
{
	for(int i=0;i<s.length();i++)
	{
		s[i]=s[i];
	}
	return s;
 } 
 
int main()
{ 
	string s1,s2;
	cout<<"Enter the first string: ";
	cin>>s1;
	cout<<"Enter the second string: ";
	cin>>s2;
    cout<<endl;
	if(convert(s1)==convert(s2))
	{
		cout<<"**Enterd strings are identical**";
	}
	else
	{
		cout<<"**Enterd strings are not identical**";
	} 
}
