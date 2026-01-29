#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;               
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    int mex = 0;
    while (freq[mex] > 0) {
        mex++;
    }

    cout << mex << "\n";
    }
}
