// write a program to sort an array in decending order.the array size and array elements are entered by the user.
#include<iostream>
using namespace std;

int main(){
	int n,max,temp;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if (arr[i]<arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[i];
				arr[i]=temp;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"The numbers arranged in the descending order are: "<<arr[i]<<" ";
	}
}