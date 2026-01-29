#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else if (c == '1') cnt1++;
            else cnt2++;
        }

        int min_top = cnt0;
        int min_bottom = cnt1;
        int max_top = cnt0 + cnt2;
        int max_bottom = cnt1 + cnt2;

        string ans;
        for (int i = 1; i <= n; i++) {
            if (i <= min_top || i > n - min_bottom) ans += '-';
            else if (i <= max_top || i > n - max_bottom) ans += '?';
            else ans += '+';
        }

        cout << ans << "\n";
    }
    return 0;
}
