#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long k0 = a / b;  // threshold where len switches to b

        long long moves;
        if (n <= k0)
            moves = n;
        else
            moves = k0 + 1;

        cout << moves << "\n";
    }
}
