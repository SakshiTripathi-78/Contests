#include <iostream>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll k;
        cin >> n >> k;
        ll mx = n * n;
        if (k == mx - 1)
        {
            cout << "NO\n";
            continue;
        }
        cout<<"yes"<<"\n";
       if (n == 2 && k == 1)
        {
            cout << "UL\nUU\n";
            continue;
        }
        
    }
}