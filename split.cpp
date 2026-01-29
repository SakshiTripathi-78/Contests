#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        
       vector<int>count(2*n+1,0);
       for(int i=0;i<2*n;i++){
         count[arr[i]]++;
       }

        int odd = 0;
        int even=0;
        for(int t:count){
            if(t==0) continue;
            else if(t%2!=0){
                odd++;
            }
            else{
                even++;
            }
        }
        int ans=odd+2*even;
        if(odd==0){
            if(even%2!=0){
                ans-=2;
            }
        }
       cout<<ans<<"\n";
    }
}
