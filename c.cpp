#include <iostream>
#include<map>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll s = 0;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            s += a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);
        ll ans = 0, sides = 0, odd = 0;
        for(ll i=n-1;i>=0;i--){
            if(s-a[i] <= a[i])continue;
            if(mp[a[i]]%2 == 0) {
                ans += a[i];
                sides++;
            }else {
                if(mp[a[i]]==1 && odd<2){
                    ans += a[i];
                    sides++;
                    odd++;
                } else if(odd<2){
                    ans += a[i];
                    sides++;
                    odd++;
                    mp[a[i]]--;
                }
            }
        }
        if(sides <3)ans =0;
        cout << ans <<"\n";
    }
}