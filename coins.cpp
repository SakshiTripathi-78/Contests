#include<iostream>
using namespace std;

int main(){
    int n, s;
    cin>>n>>s;
    int x;
    x = s/n;           // 11/5=2
    int remain = s-n*x;    // s/n+ s - nx;  
    if(remain!=0){
        x++;
    }
    cout<<x<<"\n";
}