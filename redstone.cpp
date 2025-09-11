#include<iostream>
#include<algorithm>
#include<vector>
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
        int x=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                x=1;
                break;
            }
        }
        if(x==0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";
        }
    }
}