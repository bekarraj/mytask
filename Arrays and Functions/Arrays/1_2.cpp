//write a program to find the sum and average of all elements . The array size and array elements are entered by the user.
#include<iostream>
using namespace std;

int main(){
	int n;
	float sum=0,avg;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	avg=sum/n;
	cout<<"sum of all elements in an array is "<<sum<<endl;
	cout<<"Average of all input numbers "<<avg<<endl;
}