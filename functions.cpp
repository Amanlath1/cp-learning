#include<iostream>
using namespace std;

void add(int a, int b){
    int sum= a+b;
    cout << sum;
}
int main(){
    int num1,num2;
    cout << "Enter the value: ";
    cin >> num1 >> num2;
    
    add(num1,num2);
    

    return 0;
}

// what is function?
// Fuction is the  box in the code where we write the functionality of the code.
// Every program has main fuction in it.
// Every function can be defined once.
// 1. Every fuction should be declared.
// 2. Every function needs to be defined.
// 3. Every function should be called for the usage.
// passing argument with return value.