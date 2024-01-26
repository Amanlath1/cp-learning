#include<iostream>
using namespace std;

int main(){
    int far;
    float cel;

    cout<<"Enter the temperature in Farhenite: ";
    cin>>far;

    cel=(far-32)*5/9;

    cout<<"Temperture in celcius is: "<<cel<<endl;

    return 0;
}