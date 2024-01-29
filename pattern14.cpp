#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    char ch='A';
    char value;
    for(int i=0;i<row;i++){
        value=ch+i;
        for(int j=1;j<=column;j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }
}