#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}