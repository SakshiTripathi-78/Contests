#include <iostream>
#include <vector>
#include <set>
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        set<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                temp.insert(arr[i]);
            }
        }
        int x = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
                for (int val : temp)
                {
                    if (val != x)
                    {
                        arr[i]=x;
                    }
                    else{
                        x++;
                    }
                }
            }
        }
        int l,r;
        bool tf=false;
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                l=i+1;
                tf=true;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=i+1){
                r=i+1;
            }
        }
        if(tf==true)
    }
}
