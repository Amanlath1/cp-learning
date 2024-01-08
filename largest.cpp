#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the values of three numbers: ";
    cin>>a>>b>>c;
    cout<<"The largest number is: ";

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    return 0;
}