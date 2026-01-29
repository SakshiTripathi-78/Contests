#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        vector<int> s = arr;
        sort(s.begin(), s.end());

        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++) {
            pos[s[i]] = i;
        }

        vector<char> color(n);

        for (int i = 0; i < n; i++) {
            if (pos[arr[i]] % 2 == 0)
                color[i] = 'B';
            else
                color[i] = 'R';
        }

        bool ok = true;
        for (int i = 0; i + 1 < n; i++) {
            if (color[i] == color[i + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
