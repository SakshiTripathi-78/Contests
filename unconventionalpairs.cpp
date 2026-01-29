#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==2){
            cout<<abs(arr[1]-arr[0])<<"\n";
        }
        else{
            vector<int>temp;
            sort(arr.begin(),arr.end());
            for(int i=0;i<=n-2;i+=2){
                x=abs(arr[i]-arr[i+1]);
                temp.push_back(x);
            }
            sort(temp.begin(),temp.end());
            cout<<temp[(n/2)-1]<<"\n";
        }
    }
}