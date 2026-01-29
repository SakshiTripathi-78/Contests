#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        // if k=1...then (Aj,Amax)...if Aj>Amax..then return Aj.
        /*
        Agar k 2 ya 2 se bada hoga to hamesha hi j bach jayega...qki 
        hame farak nahi padta ki hum kisko bacha rahe hai ya kisko jaane de rahe hai
        bas hum log ko jth index bachana hai.*/
        /*Agar k=1 hai to jo apan j wala hai use rest walon mein se max value se bada 
        hona padega...agar vo uske equal ya bada hoga tab ho vo exist karega.*/
        j=j-1;
        if(k>=2){
            cout<<"Yes"<<"\n";
        }
        else{
            int max_value=arr[0];
            for(int i=0;i<n;i++){
                max_value=max(arr[i],max_value);
            }
            if(arr[j]>=max_value){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
}