#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        /*vector<int> v;
        v = {1,2,3,4};
        vector<string> v1;
        v1 = {"sakshi","ashok","tripathi"};
        */
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "";
        for (int i = 0; i < n; i++) {
            string front = a[i] + s;
            string back  = s + a[i];
            s = min(front, back);
        }

        cout << s << "\n";
    }
}