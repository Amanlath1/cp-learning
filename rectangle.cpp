#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;

    for(int i=row;i>0;i--){
        for(int j=column;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}