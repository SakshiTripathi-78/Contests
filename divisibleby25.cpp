#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>temp;
        if(n%25==0){
            cout<<"0"<<"\n";
        }
        else{
            while(n!=0){
                temp.push_back(n%10);
                n=n/10;
            }
            reverse(temp.begin(),temp.end());
        }
        for(int i=0;i<n-1;i++){
            if(n%10==0||n%10==5){
                
            }
        }
    }
}