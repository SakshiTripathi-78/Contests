#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        // Determine endpoints
        long long first = a[0], last = a[n-1];

        // Fill endpoints as required to minimize |last - first|
        if(first == -1 && last == -1) {
            a[0] = 0;
            a[n-1] = 0;
        } else if(first == -1 && last != -1) {
            a[0] = last;
        } else if(first != -1 && last == -1) {
            a[n-1] = first;
        }
        // fill all other -1 with 0 for lexicographic minimality
        for(int i=0;i<n;i++) if(a[i] == -1) a[i] = 0;

        long long ans = llabs(a[n-1] - a[0]);
        cout << ans << "\n";
        for(int i=0;i<n;i++){
            if(i) cout << ' ';
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}
