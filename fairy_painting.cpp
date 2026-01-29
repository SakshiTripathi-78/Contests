#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        set<int>temp;
        for(int i=0; i<n ;i++){
            temp.insert(arr[i]);
        }
        vector<int>sakshi;
        for(int i=0;i<n;i++){
            if(arr[i]>=temp.size()){
                sakshi.push_back(arr[i]);
            }
        }
        sort(sakshi.begin(),sakshi.end());
        cout<<sakshi[0]<<"\n";
    }
}