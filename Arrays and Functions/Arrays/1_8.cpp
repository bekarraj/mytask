#include<iostream>
using namespace std;

int main(){
	int a,n,k=0,check=0,temp=0,flag=0,x=0,y=0,spot=1;
	cout<<"Enter no of numbers : "<<endl;
	cin>>n;
	int ar[n];
	int arr4[y];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int z=0;z<n;z++){
		int spot=0;
		for(int i=0;i<n;i++){
			if(z==i){
				i++;
			}
			for(int j=0;j<n;j++){
				if(i==j){
					j++;
				}
				if((ar[i]+ar[j])==ar[z] and ar[i]!=0 and ar[j]!=0){
					spot++;
					
				}
			}
		}
		if(spot==0){
			arr4[y]=ar[z];
			y++;
		}
	}
	int min=arr4[0];
	for(int i=1;i<y;i++){
		if(arr4[i]<min){
			min=arr4[i];
		}
	}
	cout<<"The answer is "<< min <<" because it is  smallest integer which cannot be formed "<<min;
}