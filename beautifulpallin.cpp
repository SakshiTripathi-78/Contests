#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        vector<int>temp;
        map<int, int> freq;  
        for(int x : arr) {
            freq[x]++;
        }
        int zeroCount=freq[0];
        int i=1;
        while(i<=n+1){
            if(freq[i]==0){
                temp.push_back(i);
            }
        }
        if(temp.size()==k){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" "<<"\n";
            }
        }
        else{
           for(int i=0;i<temp.size();i++){
            cout<<temp[i];
           }
           for(int )
        }
    }
}