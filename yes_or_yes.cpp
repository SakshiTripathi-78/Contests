#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count_N=0;
        int count_Y=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='N'){
                count_N++;
            }
            else{
                count_Y++;
            }
        }
        if(count_Y>=2){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}