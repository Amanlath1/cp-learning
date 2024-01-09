#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value upto which you want the variable: ";
    cin>>a;

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=a);

    return 0;
}