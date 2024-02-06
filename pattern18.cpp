#include<iostream>
using namespace std;

int main(){
    int val;
    cout << "Enter the value of rows and columns: ";
    cin >> val;

    for(int i = 1; i <= val; i++){
        for(int j = val; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}