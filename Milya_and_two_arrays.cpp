#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr1(n);
        vector<int>arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        set<int>sakshi;
        set<int>biya;
        for(int i=0;i<n;i++) {
            sakshi.insert(arr1[i]);
            biya.insert(arr2[i]);
        }
        if(sakshi.size()+biya.size()<4){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    }
}