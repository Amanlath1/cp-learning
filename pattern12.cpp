#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>column;
    
    for(int i=1;i<=row;i++){
        char ch='A';
        for(int j=1;j<=column;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
}