#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1==str2){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
}