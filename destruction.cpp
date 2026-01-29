#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int state=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                int state=1;
            }
        }
    }
}