#include<iostream>
#define SWAP(a,b) a ^= b ^= a ^= b
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value a 1st variable a  "<<endl;
    cin>>a;
    cout<<"Enter the value a 2nd variable b  "<<endl;
    cin>>b;
    cout<<"\n Before Swapping \n";
   cout<<" a : " << a << "\t""," << "b: "<< b<<endl;
   SWAP(a,b);
   cout<<"\n After Swapping :\n";
   cout<<" a : " << a << "\t" "," << "b : "<<b<< endl;

}
