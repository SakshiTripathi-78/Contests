#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int count=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]==-1){
                count++;
            }
        }
        if(count%2!=0){
                ans+=2;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans++;
        }
        }
        cout<<ans<<"\n";
    }
}