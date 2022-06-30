#include<iostream>
using namespace std;
int main()
{
    int num,pos,op;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the position:";
    cin>>pos;
    cout<<"Enter the operation:";
    cin>>op;
    switch(op)
    {
        case 1: num|=(1<<pos);
                break;
        case 2: num&=~(1<<pos);
                break;
        case 3: num&=(1<<pos);
                break;
    }
    cout<<"Result:"<<num;
    return 0;
}