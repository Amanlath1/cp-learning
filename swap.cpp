#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int swap;

    cin >> a >> b;

    swap = a;
    a = b;
    b = swap;

    cout << "Value of A is:" << a << endl << "Value of B is:" << b << endl;

}