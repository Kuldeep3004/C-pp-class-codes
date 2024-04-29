#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year : ";
    cin>>year;

    if (year % 500==0){
        cout<<year<<" leap year. ";
    }
    else 
    if (year % 100==0){
        cout<<year<<" not a leap year. ";
    }
    else 
    if (year % 4==0){
        cout<<year<<" leap year. ";
    }
    else
    {
        cout<<year<<" not a leap year.";
    }
    return 0;
}