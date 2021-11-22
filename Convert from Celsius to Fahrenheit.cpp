#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double celsius,fahrenheit;
    cout<<"Enter your Celsius tempertature : ";
    cin>>celsius;

    double temp = ((9*celsius)/5)+32;
    fahrenheit = temp;
    cout<<"The temperaturein fahrenheit : "<<fahrenheit<<endl;
    getch();
}



