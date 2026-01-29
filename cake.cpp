#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>cakes(n);
        for(ll i=0;i<n;i++) cin>>cakes[i];
        sort(cakes.begin(),cakes.end());
        ll ans=0;
        for(ll i=n-1;i>=0;i--){
            if(m>=0){
                ans+=cakes[i]*(m--);
            }
        }
        cout<<ans<<"\n";
    }

}