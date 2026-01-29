#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2 || n%2!=0){
            cout<<"Alice"<<"\n";
        }
        else if(n%4==0){
            cout<<"Bob"<<"\n";
            }
        else{
            cout<<"Alice"<<"\n";
        }
    }
}