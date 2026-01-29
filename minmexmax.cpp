#include <iostream>
#include <set>
#include <vector>
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
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            temp.insert(arr[i]);
            if (arr[i] == 0)
            {
                cout << "no" << "\n";
                check = false;
                break;
            }
        }
        if (check)
        {
            if (temp.size() > 2 || (temp.size()==2 && *temp.begin()!=-1))
            {
                cout << "no" << "\n";
            }
            else
            {
                cout << "yes" << "\n";
            }
        }
    }
}