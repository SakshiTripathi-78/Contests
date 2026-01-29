#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool temp=false;
        int x=0;int y=0;
        for(int i=0;i<n &&!temp;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    x=i;
                    y=j;
                    temp=true;
                    break;
                }
            }
        }
        if(!temp){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl<<a[x]<<" "<<a[y]<<endl;
        }
    }
    return 0;
}