#include<iostream>
using namespace std;

int main(){
    int a=10;

    for(int i=0;i<=10;i++){
        cout<<i<<endl;
        continue;
        cout<<"this will never be printed"<<endl;
    }

    cout<<"Loop has finished"<<endl;

    return 0;
}