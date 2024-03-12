#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if(a>b){
        cout<<"First number is greater than second number..";
    }
    else if(a==b){
        cout<<"Both the numbers are equal..";
    }
    else{
        cout<<"Second number is greater than first number..";
    }
}