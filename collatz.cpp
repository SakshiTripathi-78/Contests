#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        if(k==1){
            cout<<n*2*k<<"\n";
        }
        else{
            int mul=n;
            for(int i=0;i<k;i++){
                mul=mul*2;
            }
            cout<<mul<<"\n";
        }
    }
}