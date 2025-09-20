#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<<"2"<<"\n";
        }
        else if(y<x && y!=1 && x-y>1){
            cout<<"3"<<"\n";
        }
        else if(y==1||x==y||x-y==1){
            cout<<"-1"<<"\n";
        }
    }
}