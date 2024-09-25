#include<iostream>
using namespace std;

int main(){ 

    int i = 10;
    int* copy = &i;
    cout << i << endl;
    for(int i=1 ; i < 2 ; i++ ){
        cout << i << endl;
    }
    for(int i=2 ; i < 3 ; i++ ){
        cout << i << endl;
    }
    cout << i << endl;
    cout << copy;
    return 0;
}