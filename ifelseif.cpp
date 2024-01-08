#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount of money you have: ";
    cin>>amount;

    if(amount<200){
        cout<<"You should stay at home as you  have very less money"<<endl;
    }
    else if(amount>200&amount<1000){
        if(amount<500){
            cout<<"You should go on Pizza date as you have less money and you can enjoy in it. Have fun!!"<<endl;
            cout<<"You only can have Pizza."<<endl;
        }
        else{
            cout<<"You should go on Pizza date as you have less money and you can enjoy in it. Have fun!!"<<endl;
            cout<<"You can have Shake with Pizza."<<endl;
        }
    }
    else{
        cout<<"You should go on Movie date as you have plenty of money and you can enjoy alot in it. Have fun!!"<<endl;
    }

    return 0;
}