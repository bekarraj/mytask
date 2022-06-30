
#include<iostream>
using namespace std;
int main(){
	int count=0,sum=0;
	int arr[20];
	cout<<"Enter 20 elements of the array"<<endl;
	for(int i=0;i<20;i++){
		cin>>arr[i];
	}
	for(int i=0;i<20;i++){
		if(arr[i]%2==0){
			count++;
			sum+=arr[i];
		}
	}
	cout<<"count of even numbers present in an array is: "<<count<<endl;
	cout<<"sum of even numbers present in an array is: "<<sum<<endl;
}