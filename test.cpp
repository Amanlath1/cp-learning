#include<iostream>
using namespace std;
int main(){
    int money_aman;
    cout<<"money given by my husband: "<<endl;
    cin>>money_aman ;
    int money_mummy;
    cout<<"money given by my  mummy:"<<endl;
    cin>>money_mummy;
    int money_papa;
    cout<<" money given by my papa: "<<endl;
    cin>>money_papa;
    int sum= money_aman+money_mummy+money_papa;
    cout<<"Total Amount of money you got: "<<sum<<endl;
    int money_spend ;
    cout<<"Enter the Amount of money spent by you"<<endl;
    cin>>money_spend;
    int diffrence =sum-money_spend;
    cout<<"Amount of money left after spending: "<<diffrence<<endl;

    return 0;
}