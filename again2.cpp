#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int left=0,equal=0;
        for(int i=0;i<n;i++){
            if(arr[i]<a){
                left++;
            }
            else if(arr[i]==a){
                equal++;
            }
            else{
                break;
            }
        }
        int greater=n-equal-left;
        if(n==equal){
            cout<<a<<"\n";
        }
        else if(left>=greater){
            cout<<a-1<<"\n";
        }
        else{
            cout<<a+1<<"\n";
        }
    }
}