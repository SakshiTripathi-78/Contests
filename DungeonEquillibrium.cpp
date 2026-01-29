#include <iostream>
#include <algorithm>
#include<vector>
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

        int mx = *max_element(arr.begin(), arr.end());
        vector<int> freq(mx + 1, 0);

        for (int i = 0; i < arr.size(); i++)
            freq[arr[i]]++;

        int count = 0;
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] != i)
                count++;
        }

        cout << count << "\n";
    }
}