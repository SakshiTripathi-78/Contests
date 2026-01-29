#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        if(n%3==0){
            cout<<0<<"\n";
        }
        else{
           cout << (3 - (n % 3)) % 3 << "\n";
        }
    }
}