#include<iostream>
using namespace std;

int main(){
    int num;
    bool isprime=true;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime= false;
            break;
        }
    }

    if(isprime==true){
        cout<<num<<" is the prime number"<<endl;
    }
    else{
        cout<<num<<" is not prime number"<<endl;
    }

    return 0;

}