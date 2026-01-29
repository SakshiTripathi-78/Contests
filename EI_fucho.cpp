#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int winner=n;
        int loser=0;
        int count=0;
        while(winner!=1){
            winner-=1;
            loser+=1;
            count++;
        }
        while(loser!=0){
            loser-=1;
            count++;
        }
        cout<<count<<"\n";
    }
}