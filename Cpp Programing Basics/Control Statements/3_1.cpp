#include<iostream>
using namespace std;
int main(){
	unsigned int time;
	cout<<"Enter the time in seconds: ";
	cin>>time;
	cout<<"Time is "<<time/3600<<" hrs "<<(time%3600)/60<<" mins "<<(time%3600)%60<<" secs"<<endl;
	return 0;
}