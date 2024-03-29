#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int equalStacks(vector<int>& h1,vector<int>& h2, vector<int>& h3){
    reverse(h1.begin(), h1.end());
    reverse(h2.begin(), h2.end());
    reverse(h3.begin(), h3.end());

    partial_sum(h1.begin(), h1.end(), h1.begin());
    partial_sum(h2.begin(), h2.end(), h2.begin());
    partial_sum(h3.begin(), h3.end(), h3.begin());

    while(!h1.empty() && !h2.empty() && !h3.empty() && !(h1.back() == h2.back() && h2.back() == h3.back())){
        if(h1.back() >= h2.back() && h1.back() >= h3.back()){
            h1.pop_back();
        }

        else if(h2.back() >= h1.back() && h2.back() >= h3.back()){
            h2.pop_back();
        }

        else{
            h3.pop_back();
        }
    }

    return (h1.empty())
}

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    vector<int>h1(n1);
    vector<int>h2(n2);
    vector<int>h3(n3);

    for(int i=0;i<n1;i++){
        cin>>h1[i];
    }

    for(int i=0;i<n2;i++){
        cin>>h2[i];
    }

    for(int i=0;i<n3;i++){
        cin>>h3[i];
    }

    int result=equalStacks(h1,h2,h3);
    cout<<"Maximum possible height: "<< result << endl;

    return 0;
}