#include<iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter the number of rows and columns: ";
    cin>>val;
    char ch='A';
    char cha=ch;

    for(int i=1;i<=val;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
        ch=cha;
        ch=ch+i;
    }

    return 0;
}