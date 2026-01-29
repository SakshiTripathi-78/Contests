#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c){
            if(c==a && a==c){
                cout<<"YES"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}