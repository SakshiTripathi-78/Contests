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
        string s;
        cin>>s;
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            {
                temp.push_back(i+1);
            }
        }
        cout<<temp.size()<<"\n";
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<"\n";
        }
    }
}