#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        arr[0]=INT_MAX;
        int m=-2;
        long long ans=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            m=max(n,arr[i]);
            if(i%2==0){
                if(arr[i-1]==m){
                    ans+=1;
                }
            }
            else{
                if(arr[i]>=m){
                    ans+=m-arr[i]+1;
                    arr[i]=m-1;
                }
            }
        }
        cout<<ans<<"\n";
    }
}