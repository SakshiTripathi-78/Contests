#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>vec;
        for(int i=0;i<8;i++){
            string s;
            cin>>s;
            vec.push_back(s);
        }
        for(int col=0;col<8;col++){
            string ans;
            for(int row=0;row<8;row++){
                if(vec[row][col]!='.'){
                    ans.push_back(vec[row][col]);
                }
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}