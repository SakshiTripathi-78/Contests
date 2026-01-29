#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        int count=0;
        for(int i=0;i<n;i++) cin>>p[i];
        if(p[0]>p[1]){
            count++;
        }
        if(p[n-1]>p[n-2]){
            count++;
        }
        for(int i=1;i<n-1;i++){
            if(p[i]>p[i+1] && p[i]>p[i-1]){
                count++;
            }
        }
        if(count>=2){
            cout<<"No"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";
        }
    }
}
