#include <iostream>
int main() {
    int num,sum=0,rem;
    std::cout<<"Enter a number : ";
    std::cin>>num;
    while(num>0)
    {
        rem=num%10;
        rem=rem+1;
        rem=rem%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    num=sum;
    sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;;
        num=num/10;
    }
    std::cout<<"New Number by adding one to each digit is: "<<sum;
    return 0;
}