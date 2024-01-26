#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter value of row nd col";
    cin>>row>>col;
    
    for(int i=row;i>=0;i--){
        for(int i=col;i<=0;i++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
    return 0;
}