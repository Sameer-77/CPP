#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0)
    {
        cout<<"Positive number";
    }
    else if(num<0){
        cout<<"Number is negative";
    }
    else{
        cout<<"Number is ZERO";
    }
}