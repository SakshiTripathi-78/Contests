#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int protect = 0;        
    int lastprotected = -k;       
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i - lastprotected >= k) {
                protect++;        
                lastprotected = i;       
            } else {
               lastprotected = i;      
            }
        }
    }
    cout << protect << "\n";
    }
}