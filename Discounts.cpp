#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int sum=0;
		vector<int>price(n);
		vector<int>discount(k);
		for(int i=0; i<n; i++) {
			cin>>price[i];
		}
		for(int i=0; i<k; i++) {
			cin>>discount[i];
		}
		if(n==1 && k==1) {
			cout<<"0"<<"\n";
		}
		else {
			sort(price.begin(),price.end());
			reverse(price.begin(),price.end());
			sort(discount.begin(),discount.end());
			int right=k-2;
            int left=
		}
		cout<<sum<<"\n";
	}
}