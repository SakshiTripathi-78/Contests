#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        bool temp=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i+=2){
            if(arr[i]<arr[i+1] && i+1<n){
                temp=1;
            }
        }
        if(temp==1){
            cout<<"no"<<"\n";
        }
        else{
            cout<<"yes"<<"\n";
        }
    }
}