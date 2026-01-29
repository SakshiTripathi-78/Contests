#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(m);
        for(int i=0;i<m;i++) cin>>arr[i];
        int pos=0;
        for(int i=0;i<m;i++){
            if(arr[i]==1){
                pos=i;
            }
        }
        if(pos!=0){
            cout<<"1"<<"\n";
        }
        else{
            cout<<n-arr[m-1]+1<<"\n";
        }
    }
}