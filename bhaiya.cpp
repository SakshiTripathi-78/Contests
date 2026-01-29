#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll z = 0, o = 0, h = 0; 
        for(int i=0;i<k;i++){
            if(s[i] == '0') z++;
            else if(s[i] == '1') o++;
            else h++;
        }
        for(int i=0;i<n;i++){
            if(i<z || i> n-1-o || z+h > n-1 || n-1-o-h < 0){
                cout << "-";
            } else if (i<z+h || i> n-1-o-h){
                cout << "?";
            }else {
                cout << "+";
            }
        }
        cout << "\n";
    }
}