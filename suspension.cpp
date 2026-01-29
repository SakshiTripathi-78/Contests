#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;
        int count;
        if(y%2==0){
            count=y/2;
        }
        else{
            count=(y-1)/2;
        }
        if((count+r)<=n){
            cout<<count+r<<"\n";
        }
        else{
            cout<<n<<"\n";
        }
    }
}