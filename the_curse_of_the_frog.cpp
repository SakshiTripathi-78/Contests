#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long best_free = 0;
        long long best_gain = -1;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            // free jumps before first rollback
            best_free = max(best_free, (b - 1) * a);

            long long gain = b * a - c;
            if (gain > 0)
                best_gain = max(best_gain, gain);
        }

        // Case 1: reach without rollback
        if (best_free >= x) {
            cout << 0 << "\n";
            continue;
        }

        // Case 2: no useful jump
        if (best_gain <= 0) {
            cout << -1 << "\n";
            continue;
        }

        // Case 3: need rollbacks
        long long remaining = x - best_free;
        long long rollbacks = (remaining + best_gain - 1) / best_gain;

        cout << rollbacks << "\n";
    }

    return 0;
}
