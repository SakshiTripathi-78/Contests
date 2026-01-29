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
        int n;
        cin >> n;
        vector<int> arr(n + 1, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        /*
        for(int i=0;i<n-1;i++){
            x = max({x+arr[i],x-arr[i+1]});

        }
            */
        int x = 0;
        int cnt_neg = 0;
        int cnt_pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                cnt_neg++;
            }
            else
            {
                cnt_pos++;
            }
        }
        if (cnt_neg == n)
        {
            for (int i = 1; i < n; i++)
            {
                x += arr[i];
            }
            cout<<x<<"\n";
        }
        else if (cnt_pos == n)
        {
            for (int i = 0; i < n - 1; i++)
            {
                x += arr[i];
            }
            cout<<x<<"\n";
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] >= 0 && arr[i + 1] < 0)
                {
                    x += max(arr[i], abs(arr[i + 1]));
                    if (arr[i] > abs(arr[i + 1]))
                    {
                        arr[i] = 0;
                    }
                    else
                    {
                        arr[i + 1] = 0;
                    }
                }
                else if (arr[i] < 0 && arr[i + 1] > 0)
                {
                    x += arr[i];
                    arr[i] = 0;
                }
            }
            cout << x << "\n";
        }
    }
}