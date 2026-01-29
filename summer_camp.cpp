#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = "";
    int num = 1;

    while (s.length() < n) {
        s += to_string(num);
        num++;
    }

    cout << s[n - 1];
    return 0;
}
