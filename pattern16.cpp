#include<iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter the value of rows and columns: ";
    cin>>val;
    char ch='A';

    for(int i=1;i<=val;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;

    }

    return 0;
}