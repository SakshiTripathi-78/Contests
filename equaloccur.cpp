#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        map<int,int>temp;
			for(int i=0; i<n; i++) {
				temp[arr[i]]++;
			}
        vector<int>last;
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=0){
                last.push_back(temp[i]);
            }
        }
        int j=0;
        int max=0;
        sort(last.begin(),last.end());
        for(int i=last.size();i>=1;i--){
            if((last[j]*i)>max){
                max=last[j]*i;
            }
            j++;
        }
        cout<<max<<"\n";

    }
}




