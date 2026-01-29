#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> orig(n), cur(n);
        for (int i = 0; i < n; i++) {
            cin >> orig[i];
            cur[i] = orig[i];
        }

        long long mx = *max_element(cur.begin(), cur.end());

        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--; // 0-based index

            cur[b] += c;
            mx = max(mx, cur[b]);

            if (mx > h) {
                // reset
                cur = orig;
                mx = *max_element(cur.begin(), cur.end());
            }
        }

        for (int i = 0; i < n; i++) {
            cout << cur[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
