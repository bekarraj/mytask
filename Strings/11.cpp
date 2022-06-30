// write a c++ program to accept a sentence(it will be space separated ) from the user and print the length of the string.

#include <iostream>
using namespace std;

void len_gth(char *str){
	int l=0;
	while(*str!='\0'){
		if(*str!=' '){
			l++;
		}
		str++;
	}
	cout<<"length of a given  string : "<<l<<endl;
}

int main(){
	char s[50];
	cout<<" enter the string"<<endl;
	cin.getline(s,50);
	len_gth(s);
}