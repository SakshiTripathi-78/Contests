#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        vector<int> temp;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                temp.push_back(i);
            }
        }
        if (temp.empty() || x == n)
        {
            cout << "yes" << "\n";
            continue;
        }
        int last = temp.back();
        int first = temp[0];
        if (last - first + 1 > x)
        {
            cout << "no" << "\n";
        }
        else
        {
            cout << "yes" << "\n";
        }
    }
}