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
        int count1=0;
        int count2=0;
        int b1=a-1;
        int b2=a+1;
        for(int i=0;i<n;i++){
            if(arr[i]<=b1){
                count1++;
            }
            else if(arr[i]>=b2){
                count2++;
            }
        }
        if(count1>n-count1){
            cout<<b1<<"\n";
        }
        else if(count2>n-count2){
            cout<<b2<<"\n";
        }
        else if(count1==n-count1){
            cout<<b1<<"\n";
        }
        else{
            cout<<b2<<"\n";
        }
    }
}