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
        for(int i=0;i<n;i++){
            if(arr[i]<a){
                count1++;
            } 
            else if(arr[i]>a){
                count2++;
            }       
        }
        if(count1>count2){
            cout<<a-1<<"\n";
        }
        else{
            cout<<a+1<<"\n";
        }
    }
}