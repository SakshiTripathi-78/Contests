#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int count = 0;
        int cnt = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> temp(n + 1, 0);
        for (int i = 0; i < n; i++)
            temp[arr[i]]++;
        for (int i = 0; i < k; i++)
        {
            if (temp[i] == 0)
            {
                count++;
            }
        }
        cout<<max(count,temp[k])<<"\n";
    }
}