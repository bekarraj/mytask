// write a c++ program to accept a sentence(it will be space separated ) from the user and print the length of the string.

#include <iostream>
using namespace std;

void valid(char *str){
	int l=0;
	while(*str!='\0'){
		if(*str==' '){
			l++;
		}
		str++;
	}
	if(l==3){
		cout<<"valid numbers of parameters"<<endl;
	}
	else{
		cout<<"invalid number of parameters. pls try again"<<endl;
	}
	
}

int main(){
	char s[50];
	cout<<" enter the string"<<endl;
	cin.getline(s,50);
	valid(s);
}