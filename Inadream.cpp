#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        c=c-a;
        d=d-b;
        bool temp=false;
        if(max(a,b)<=(min(a,b)+1)*2 && max(c,d)<=(min(c,d)+1)*2){
            temp=true;
        }
        if(temp==true){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
}