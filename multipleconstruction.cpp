#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        vector<int>temp(2*n,0);
        for(int i=1;i<n;i++){
            for(int j=i+1;j<2*n;j++){
                if((j-i)%arr[i]==0){
                    temp[i] = arr[i];
                    temp[j] = arr[i];
                }
            }
        }
        for(int i=0;i<2*n;i++){
            if(temp[i]==0){
                temp[i]=1;
            }
        }
        for(int i=0;i<2*n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<"\n";
}
}
