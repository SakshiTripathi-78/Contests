#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int ans=0;
        vector<int>ycoord(n);
        for(int i=0;i<n;i++) cin>>ycoord[i];
        vector<int>xcoord(m);
        for(int i=0;i<m;i++) cin>>xcoord[i];
        if(xcoord[m]==x){
            ans=2+m+n;
        }
        else {
            ans=m+n;
        }
        cout<<ans<<"\n";
    }
}