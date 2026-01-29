#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int deletions = 0;
        int sakshi = a[0];

        for(int i = 1; i < n; i++) {
            if(a[i] < sakshi) {
                deletions++; 
            } else {
                sakshi = a[i]; 
            }
        }

        cout << deletions << "\n";
    }
}
