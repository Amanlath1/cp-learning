#include<iostream>
using namespace std;

int main(){
    int row, column;
    cout<<"Enter the value of rows and columns: ";
    cin >> row >> column;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(i > j){
                cout << " ";
            }
        }
        for(int j = 1; j <= column; j++){
            if(i <= j){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}