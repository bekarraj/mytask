#include<iostream>
using namespace std;
int main()
{
	 int l,r,k,mod,sum=0;
	 
	 cout<<"Enter l, r, k values:";
	 cin>>l>>r>>k;
     
     for(int i=l;i<=r;i++)
     {
     	 mod = i%k;
     	 if(mod==0)
     	 {
     	   sum++;	
		 }
	 }
	 
     cout<<sum;
     
	 return 0;
}
