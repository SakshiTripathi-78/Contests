#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int count0 = 0, count1 = 0, count2 = 0;
        for (char c : s) {
            if (c == '0'){
                count0++;
            }
            else if (c == '1') {
                count1++;
            }
            else {
                count2++;
            }
        }

        int top = count0;
        int bottom = count1;
        int maxtop = count0 + count2;
        int maxbottom = count1 + count2;

        string temp;
        for(int i=1;i<n;i++){
            if(i<=top){
                temp=temp+"-";
            }
            else if(i==maxtop){
                temp=temp+"?";
            }
            else{
                temp=temp+"+";
            }
        }
        cout<<temp<<"\n";
    }
}