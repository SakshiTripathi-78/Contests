#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int sum2=sum-arr[n-1];
        if(sum2>arr[n-1]){
            cout<<sum<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
}