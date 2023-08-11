#include<iostream>
using namespace std;

int main(){
    int arr[5] = {6,2,8,4,10};
    int count = 0;
    cout << "Even Elements in the array are: ";
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    
    cout << count << endl;
}