// Write a program to find the largest element of an array. the array size and array elements are entered by the user.
#include<iostream>
using namespace std;

int main(){
	int n,max;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=1;i<=n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"Largest element is "<<max<<endl;
}