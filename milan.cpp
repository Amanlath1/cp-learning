#include<iostream>
using namespace std;

int main(){
    int Gunika_Money;
    cout<< "Enter the Amount you initially have: ";
    cin>> Gunika_Money;
    int Gunika_Mother;
    cout<< "Enter the Amount of money your mother gave to you";
    cin>> Gunika_Mother;
    int Gunika_Papa;
    cout<< "Enter the Amount of money your father gave to you";
    cin>> Gunika_Papa;

    Gunika_Money = Gunika_Money + Gunika_Mother + Gunika_Papa;

    cout<< Gunika_Money<< endl;

    return 0;
}