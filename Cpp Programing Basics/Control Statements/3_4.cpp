#include<iostream>
int main(){
	std::cout<<"Enter a number: ";
	float num;
	std::cin>>num;
	if(num>0){
		std::cout<<num<<" is a positive number";
	}
	else if(num<0){
		std::cout<<num<<" is a negative number";
	}
	else{
		std::cout<<num<<" is neither negative or positive";
	}
	return 0;
}