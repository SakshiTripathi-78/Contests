#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);

        for (int &x : b) cin >> x;

        sort(b.rbegin(), b.rend());  // sort descending

        // compute maximum count of b[i] >= k
        int ans = 0;

        for (int k = 1; k <= b[0]; k++) {
            // count how many elements >= k
            int cnt = upper_bound(b.begin(), b.end(), k-1, greater<int>()) - b.begin();
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
}
