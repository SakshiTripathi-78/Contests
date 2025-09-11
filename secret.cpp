#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>a;
        int count=0;
        for(long long int i=10;n>=i;i*=10){
            if(n%(i+1)==0){
                long long int x=n/(i+1);
                a.push_back(x);
                count++;
            }
        }
        cout << count <<"\n";
        reverse(a.begin(),a.end());
        for(auto val: a){
            cout << val << " ";
        }
        cout<<"\n";
    }
}


/*
n=x+y

temp=z+z*10;
*/