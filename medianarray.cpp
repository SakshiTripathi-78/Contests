#include<iostream>
using namespace std;

int main(){
    vector<int>temp;
    for(int i=0;i<nums1.size()-1;i++){
        temp.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size()-1;i++){
        temp.insert(nums2[i]);
    }
    sort(temp.begin(),temp.end());
    int n=temp.size();
    if(n%2==0){
        float ans=(temp[n/2]+temp[n-1])/2;
    }
    else{
        float ans=(temp[(n-1)/2]);
    }
    cout<<ans;
}

