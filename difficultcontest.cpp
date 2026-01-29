#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='T'){
                swap(s[m++],s[i]);
            }
        }
        cout<<s<<"\n";
    }
}