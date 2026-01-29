#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        stack<ll>st1, st2;
        for(int i=n-1;i>=0;i--)st1.push(a[i]);
        ll ans = 0;
        while(st1.size() != 1){
            st2.push(st1.top());
            st1.pop();
            if(st2.top() < -st1.top()){
                ll temp = st2.top();
                st2.pop();
                st2.push(st1.top());
                st1.pop();
                st1.push(temp);
            }
        }
        while(!st2.empty()){
            ans += st2.top();
            st2.pop();
        }
        cout << ans <<"\n";
    }
}