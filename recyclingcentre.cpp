#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c;
    cin>>n;
    cin>>c;
    int y=1;
    int ans=0;
    int count=0;
    vector<int>arr(n);
    vector<int> temp;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>c){
            ans++;
        }    
    }
    for (int x : arr) {
        if (x <= c) {
            temp.push_back(x);
            count++;
        }
    }
    arr = temp;
    sort(arr.begin(),arr.end());
    for(int i=count-1;i>=0;i--){
        if(y*arr[i]<=c){
            y*=2;
        }
        else{
            ans++;
        }
    }
     cout<<ans<<"\n";
    }
}