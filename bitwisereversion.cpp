#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;
        ll a = (x|z);
        ll b = (x|y);
        ll c = (y|z);
        if ((a&b)==x && (b&c)==y && (c&a)==z)cout << "Yes\n";
        else cout << "No\n";
    }
}