#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]==0){
                count++;
            }
        }
        if(count==n){
            cout<<'0'<<"\n";
        }
        else {
            if(s[0]=='1'){
                ans++;
                s[0]=2;
            }
        }
        int num=k-1;
        for(int i=1;i<n;i++){
            if(s[i]=='1' && ){
                while(s[j-k-1]==)

            }
        }
    }
}