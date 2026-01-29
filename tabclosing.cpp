#include <iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        set<int>s;
        int min_val;
        for(int i=1;i<=n;i++){
            min_val=min(b,a/i);
            s.insert(min_val);
        }
        cout<<s.size()<<"\n";
    }
}
