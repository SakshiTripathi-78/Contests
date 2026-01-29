#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        int R = 0, C = 0, B = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= h && x <= l) B++;
            else if (x <= h) R++;
            else if (x <= l) C++;
        }

        int ans = 0;

        // R with C
        int x = min(R, C);
        ans += x;
        R -= x;
        C -= x;

        // R with B
        x = min(R, B);
        ans += x;
        R -= x;
        B -= x;

        // C with B
        x = min(C, B);
        ans += x;
        C -= x;
        B -= x;

        // B with B
        ans += B / 2;

        cout << ans << "\n";
    }
    return 0;
}
