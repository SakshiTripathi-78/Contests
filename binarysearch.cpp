#include<iostream>
using namespace std;

int main(){
    int n,x,i,left,right;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    left=0;
    right=n-1;

    int z=left+(right-left)/2;
    if(arr[z]==x){
        cout<<"Number found";
    }
    else if(arr[z]<x){
        left=z+1;
    }
    else if(arr[z]>x){
        right=z-1;
    }
    else{
        cout<<"number not present";
    }

}