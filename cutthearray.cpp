#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int>arr(n);
		int totalsum=0;
		bool temp=false;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++){
			totalsum+=arr[i];
		}
		int summ=0;
		int x=arr[0];
		for(int i=1;i<n-1;i++){
			set<int>sum;
			int s1=x%3;
			sum.insert(s1);
			summ=summ+arr[i];
			int s2=summ%3;
			int s3=(totalsum-summ-arr[0])%3;
			sum.insert(s2);
			sum.insert(s3);
			if(sum.size()==3||sum.size()==1){
				temp=true;
			}
			if(temp){
			cout<<"1"<<" "<<i+1<<"\n";
			break;
		}
		}
		if(!temp){
			cout<<"0 0"<<"\n";
		}
	}
}
