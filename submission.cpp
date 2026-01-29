#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        bool temp=false;
        if(arr.size()%2==0){
            for(int i=0;i<n-1;i+=2){
                sum+=arr[i]+arr[i+1];
            }
        }
        else{
            for(int i=0;i<n-2;i+=2){
                sum+=arr[i]+arr[i+1];
                temp=true;
            }
        }
        if(!temp){
            sum=sum+arr[n-1];
            cout<<sum<<"\n";
        }
        else{
            cout<<sum<<"\n";
        }
    }
}