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
        vector<int>temp;
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==1){
            cout<<"0"<<"\n";
            continue;
        }
        else{
            int small=arr[0];
            for(int i=0;i<n-1;i++){
                if(small<arr[i+1]){
                    temp.push_back(i+2);
                }
                else{
                    small=arr[i+1];
                }
            }
        }
        cout<<temp.size()<<"\n";
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<"\n";
    }
}