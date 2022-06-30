// write a c++ program to print the prime numbers between two pstive integers.

#include<iostream>
using namespace std;
int n,flag=1;
int prime_num(int i){
	int flag=1;
	for(int j=2;j<i;j++){
		if(i%j==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		return 1;
	}		
}
int main()
{
	int a,b,k=0,check=0,so=0;
	cout<<"Enter two positive integers : "<<endl;
	cin>>b;
	cin>>a;
	int arr[a];
	for(int i=b;i<a;i++){
		check=prime_num(i);
		if(check==1){
			arr[k]=i;
			k++;
		}
		so=k;
	}
	cout<<"The prime numbers between "<<b<<" and "<<a<<" are :";
	int i=0;
	while(so>0){
		cout<<arr[i]<<" ";
		i++;
		so--;
	}
	
}