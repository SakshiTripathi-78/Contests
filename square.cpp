#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c){
            if(c==d && d==a){
                 cout<<"yes"<<"\n";
            }   
            else{
                cout<<"no"<<"\n";
            }
        }
        else{
            cout<<"no"<<"\n";
        }
    }
    return 0;
}