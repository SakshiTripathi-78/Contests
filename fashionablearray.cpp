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
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.begin());
        long long first=-1;
        long long last=-1;
        for(int i=0;i<n;i++){
            if(first==-1 && (arr[i]%2)!=(arr[0]%2)){
                first=i;
            }
            if((arr[i]%2)!=(arr[n-1]%2)){
                last=i;
            }
        }
        if((arr[0]+arr[n-1])%2){
            cout<<min(first,n-last-1)<<"\n";
        }
        else{
            cout<< 0 <<"\n";
        }
    }
    return 0;
}