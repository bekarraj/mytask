// write a c++ program to pass the string "Hello World" , via command line and print the output.

#include <iostream>
using namespace std;

int main(){
	string str;
	cout<<" enter the string"<<endl;
	getline(cin,str);
	cout<<str;
}