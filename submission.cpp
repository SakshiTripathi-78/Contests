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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (n == 1)
        {
            if(arr[0]==1||arr[0]==0){
                cout<<arr[0]+1<<"\n";
            }
            else{
                cout << arr[0] << "\n";
            }
        }
        else
        {
            int temp = arr[1] + 1;
            for (int i = 2; i < n; i++)
            {
                temp = temp + arr[i];
            }
            cout << temp << "\n";
        }
    }
}