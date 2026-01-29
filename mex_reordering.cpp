#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> cnt(n + 2, 0);
        for (int x : a) cnt[x]++;

        int M = 0;
        while (cnt[M] > 0) M++;

        if (M >= 2) {
            cout << "YES\n";
        } else {
            // M == 0 or M == 1
            if (cnt[0] <= 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
