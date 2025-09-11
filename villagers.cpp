#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(),arr.end(), greater<ll>());
        ll ans = 0;
        for(int i = 0;i<n;i+=2){
            ans += arr[i];
        }
        cout << ans <<"\n";
    }
    return 0;
}

// 1 2 3 4 5

// 2 + 4 + 5 = 11

// 5 4 3 2 1

// 5 + 3 + 1 = 9

// |__0_|_1__|_2__|__3_|__4_| =>already sorted in decreasing order.
//now if the number is even =>
// |_0__|_1__|__2_|_3__| 
// int main() {
//     main1();
//     exit(0);
// 	int t;
// 	cin>>t;
// 	while(t--) {
// 		int n;
// 		cin>>n;
// 		int arr[n];
// 		int total=0;
// 		for(int i=0; i<n; i++) {
// 			cin>>arr[i];
// 		}
// 		sort(arr,arr+n);
//         int j;
//         if(n%2==0){
//             for(int i=0; i<n; i=j+1) {
//                 j=i+1;                                          // 2152 => 1 2 2 5 => 2+5=7.
//                 if(arr[i]>=arr[j]) {                            //1 2 2 5 => (1,2)=2 , (2,5)=5
//                     total+=arr[i];                              // 215 => 1 2 5 => 2+5 =>7.
//                 }                                               /* if n is even, then normal. If n is odd, then 1)sort 2) iterate till n-1 and add arr[n-1]*/
//                 else {                                                 
//                     total+=arr[j];
//                 }
//             }
//         }
//         else{
//             for(int i=0;i<n-1;i++){
//                 j=i+1;
//                 if(arr[i]>=arr[j]){
//                     total+=arr[i];
//                 }
//                 else{
//                     total+=arr[j];
//                 }
//             }
//             total+=arr[n-1];
//         }
            
// 		cout<<total;
// 	}
// }