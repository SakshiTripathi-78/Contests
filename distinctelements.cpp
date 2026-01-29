#include <iostream>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<long long> b(n+1,0);
    for (int i = 1; i <= n; ++i) cin >> b[i];

    vector<int> a(n+1, 0);
    int next = 1; 

    for (int i = 1; i <= n; ++i) {
        long long d = b[i] - b[i-1];      
        int last_pos = i - (int)d;        
        if (last_pos == 0) {
            a[i] = next;
            next++;
        } else {
            a[i] = a[last_pos];
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i]<<" ";
    }
    cout << "\n";
    }
}
