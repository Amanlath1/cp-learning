#include<iostream>
using namespace std;

int main(){
    int value;
    cout<<"Enter the value: ";
    cin>>value;

    cout<<"a--> for multiplying with 2"<<endl;
    cout<<"b--> for multiplying with 3"<<endl;

    char choice;
    cout<<"Select the character according to which you want to perform the operation: ";
    cin>>choice;

    switch(choice){
        case 'a':
            cout<<"After multiplycation with 2 the value changes to: "<<value*2<<endl;
            break;
        
        case 'b':
            cout<<"After multiplycation with 3 the value canges to:"<<value*3<<endl;
            break;
        
        default:
            cout<<"Enter the correct option."<<endl;
    }

    return 0;
}