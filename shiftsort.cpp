#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        cin>>n;
        cin>>a;
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                c++;
            }
        }
        int ans=c;
        for(int i=0;i<c;i++){
            if(a[i]=='0'){
                ans--;
            }
        }
        cout<<ans<<"\n";
    }
}