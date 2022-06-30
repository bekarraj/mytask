//write a program to search an element in an array. The array size and array elements are entered by the user.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,flag;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to search :"<<endl;
	cin>>flag;
	for(int i=0;i<n;i++){
		if(arr[i]==flag){
			cout<<"***Element "<<arr[i]<<" Found and its index is "<<i<<"***"<<endl;
			exit(0);
		}
	}
	cout<<"!!!Element not Found!!!";
	
}
