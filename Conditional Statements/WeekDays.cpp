#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Choose a number between 1 to 7: ";
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"MONDAY";
        break;
        case 2: cout<<"TUESDAY";
        break;
        case 3: cout<<"WEDNESDAY";
        break;
        case 4: cout<<"THURSDAY";
        break;
        case 5: cout<<"FRIDAY";
        break;
        case 6: cout<<"SATURDAY";
        break;
        case 7: cout<<"SUNDAY";
        break;
        default: cout<<"Invalid choice..";
        break;
    }

}