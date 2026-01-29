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
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int min=arr[0]-1;
        int cycle=0;
        for(int i=0;i<n;i++){
            if(arr[i]>min){
                min=arr[i];
                cycle+=1;
                arr[i]=0;
                continue;
            }
            else{
                arr[i]=0;
            }
        }
        cout<<cycle<<"\n";
    }
}