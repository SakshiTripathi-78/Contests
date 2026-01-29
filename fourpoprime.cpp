#include <iostream>
#include<numeric>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int first = min({a,b,c});
        const int last = 1000000;
        for (int d = first; d <= last; ++d) {
            if (gcd(d,a) == 1 && gcd(d,b) == 1 && gcd(d,c) == 1) {
                cout << d << '\n';
                break;
            }
        }
    }
    return 0;
}
