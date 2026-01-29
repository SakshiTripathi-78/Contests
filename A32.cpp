#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(b<a-1||b<a && a%2==0){
            cout<<"-1"<<endl;
            continue;
        }
        if(b==a-1||(b<a && a%2==0)){
            cout<<"y"<<endl;
            continue;
        }
        int ans=0;
        while(a!=b){
            if(a%2==0){
                ans=ans+min(x,y);
            }
            else{
                ans=ans+x;
                a++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}