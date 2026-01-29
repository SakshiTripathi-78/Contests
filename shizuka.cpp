#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<"0"<<"\n";
            continue;
        }
        else{
            cout<<(n/4)+1<<"\n";
        }
    }
}