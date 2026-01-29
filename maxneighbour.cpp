#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=4*n*n-n-4;
        int y=5*(n*n-n-1);
        if(n==1){
            cout<<"1"<<"\n";
        }
        else if(n==2){
            cout<<"9"<<"\n";
        }
        else {
            cout<<max(x,y)<<"\n";
        }
    }
}