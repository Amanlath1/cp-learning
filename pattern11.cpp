#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>column;
    char ch='A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<ch;
        }
        cout<<endl;
        ch=ch+1;
    }
}