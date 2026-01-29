#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        set<int> st;
        vector<int> v;
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int  i = 0; i < n; i++){
            if(arr[i]>0){
                st.insert(arr[i]);
            }
            else v.push_back(i);

        }
        vector<int>missing;
 
        for (int i = 1; i <= n; i++)
        {
            if(st.find(i) == st.end()){
                missing.push_back(i);
            }
        }
       reverse(missing.begin() , missing.end());

       for(int i =0 ; i<missing.size() ; i++){
           arr[v[i]] =missing[i];
       }

       int l=0,r=n-1;
            while(arr[l]==l+1 && l<n){
            l=l+1;
        }
        while(arr[r]==r+1 && r>=0 ){
            r=r-1;
        }
       if(l>=r){
        cout<<0<<"\n";
       }
       else{
        cout<<r-l+1<<"\n";
       }
    }
    return 0;
}