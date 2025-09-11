#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string a,b,c;
        cin>>n>>a>>m>>b>>c;
        
       for(int i=0;i<m;i++){
            if(c[i]=='D'){
                a+=b[i];
            }else{
                string temp;
                temp=temp+b[i];
                a=temp+a;
            }
       }
       cout<<a<<"\n";
    }
}

     /*
     for i=0,i<m;i++
     if c[i]==D then,
     a=a+b[i];
     else,
     string temp;
     temp+=b[i];
    a=temp+a;
     put b[i] in the first place.
                                                */ 