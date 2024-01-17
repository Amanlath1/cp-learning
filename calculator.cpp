#include<iostream>
using namespace std;

int main(){
    int operation;
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"1--> for addition"<<endl;
    cout<<"2--> for substraction"<<endl;
    cout<<"3--> for multiplycation"<<endl;
    cout<<"4--> for division"<<endl;
    cout<<"5--> for remainder"<<endl;

    cout<<"Select the desiered number according to the operation you want to use: ";
    cin>>operation;

    cout<<"Enter the second number: ";
    cin>>num2;

    switch(operation){
        case 1:
            cout<<"Addition of both the numbers is: "<<num1+num2<<endl;
            break;
        
        case 2:
            cout<<"Substraction between both numbers is: "<<num1-num2<<endl;
            break;
        
        case 3:
            cout<<"Multiplycation between both the numbers is: "<<num1*num2<<endl;
            break;
        
        case 4:
            cout<<"Division between both the numbers is: "<<num1/num2<<endl;
            break;
        
        case 5:
            cout<<"Remainder after division of both the numbers is: "<<num1%num2<<endl;
            break;
        
        default :
            cout<<"Enter the correct operation"<<endl;
    }

    return 0;
}