#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        bool ok = false;   

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 0 && arr[i + 1] == 0) {
                ok = true;
                break;
            }
        }

        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) count1++;
        }

        if (count1 == n) {
            ok = true;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
