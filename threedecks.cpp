#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        while(b<c){
            if(a<b){
                a++;
                c--;
            }
            else if(a==b){
                b++;
                a++;
                c-=2;
            }
            else if(a==b==c){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
}