#include <iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'u'){
                if(i-1 >= 0 && i+1 < n && s[i-1] == 'u' && s[i+1] == 'u'){
                    s[i] = 's';
                    ans++;
                } else if (i-1 >= 0 && i+1 < n && (s[i-1] == 'u' || s[i+1] == 'u')){
                    s[i+1] = 's';
                    ans++;
                } else if (i-1 >= 0) {
                    if(s[i-1] == 'u'){
                        s[i] = 's';
                        ans++;
                    } else if(i+1 >=n){
                        s[i] = 's';
                        ans++;
                    }
                } else if(i+1 <n){
                    if(s[i+1] == 'u'){
                        s[i] = 's';
                        ans++;
                    } else if(i-1 < 0){
                        s[i] = 's';
                        ans++;
                    }
                }
            }
        } 
        cout << ans << "\n";
    }
}