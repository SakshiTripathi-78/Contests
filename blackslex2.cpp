#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // original total cost
        long long total = 0;
        for (int i = 0; i < n - 1; i++) {
            total += llabs(a[i] - a[i + 1]);
        }

        long long maxSaving = 0;

        // remove first element
        maxSaving = max(maxSaving, llabs(a[0] - a[1]));

        // remove last element
        maxSaving = max(maxSaving, llabs(a[n - 2] - a[n - 1]));

        // remove a middle element
        for (int i = 1; i < n - 1; i++) {
            long long saving =
                llabs(a[i - 1] - a[i]) +
                llabs(a[i] - a[i + 1]) -
                llabs(a[i - 1] - a[i + 1]);

            maxSaving = max(maxSaving, saving);
        }

        // minimum possible time
        cout << total - maxSaving << "\n";
    }

    return 0;
}
