#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value upto which you want the variable: ";
    cin>>a;

    int i=1;

    while(i<=a){
        cout<<i<<endl;
        i=i+1;//i++
    }

    return 0;
}