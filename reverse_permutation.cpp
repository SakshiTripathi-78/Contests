#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }

        // suffix maximum and its position
        vector<int> sufMax(n), pos(n);
        sufMax[n-1] = p[n-1];
        pos[n-1] = n-1;

        for(int i = n-2; i >= 0; i--) {
            if(p[i] > sufMax[i+1]) {
                sufMax[i] = p[i];
                pos[i] = i; 
            } else {
                sufMax[i] = sufMax[i+1];
                pos[i] = pos[i+1];
            }
        }

        bool done = false;

        for(int i = 0; i < n; i++) {
            if(sufMax[i] > p[i]) {
                reverse(p.begin() + i, p.begin() + pos[i] + 1);
                done = true;
                break;
            }
        }

        for(int x : p) cout << x << " ";
        cout << "\n";
    }
}
