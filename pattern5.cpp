#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    int count=1;
    for(int i = 1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}