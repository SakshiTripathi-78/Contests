#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x;
        vector<int>temp;
        while(x>0){
            n=x%10;
            temp.push_back(n);
            x=x/10;
        }
        int smallest=temp[0];
        for(int i=1;i<temp.size();i++){
            if(temp[i]<smallest){
                smallest=temp[i];
            }
        }
        cout<<smallest<<"\n";
    }
}