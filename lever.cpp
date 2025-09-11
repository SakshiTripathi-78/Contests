#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        int temp=0;
        for(int i=0;i<n;i++) cin>>arr1[i];
        for(int i=0;i<n;i++) cin>>arr2[i];
        for(int i=0;i<n;i++){
            if(arr1[i]>arr2[i]){
                temp+=arr1[i]-arr2[i];
            }
        }
        cout<<temp+1<<"\n";
    }
}



/*    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            arr1[i]-=arr1[i];
        }
}
*/ 