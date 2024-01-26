#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n upto which you want the sum: ";
    cin>>n;

    int sum=0;
    for(int i=0;i<=n;i=i+2){
        sum=sum+i;
    }
    cout<<"Sum of even numbers upto " << n <<" is " << sum << endl;

    return 0;
}