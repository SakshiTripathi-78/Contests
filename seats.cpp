#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ones = 0;
        for (char c : s) {
            if (c == '1') ones++;
        }

        int add = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '1') {
                i++;
                continue;
            }

            int j = i;
            while (j < n && s[j] == '0') j++;

            int len = j - i;

            bool leftBlocked  = (i > 0 && s[i - 1] == '1');
            bool rightBlocked = (j < n && s[j] == '1');

            if (leftBlocked && rightBlocked) {
                add += max(0, (len - 2 + 2) / 3); // ceil((len-2)/3)
            }
            else if (leftBlocked || rightBlocked) {
                add += max(0, (len - 1 + 2) / 3); // ceil((len-1)/3)
            }
            else {
                add += (len + 2) / 3; // ceil(len/3)
            }

            i = j;
        }

        cout << ones + add << "\n";
    }

    return 0;
}
