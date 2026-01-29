#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int ans = 0;
        if (x % k == 0 && y % k == 0)
        {
            ans = x / k + y / k;
        }
        else if (x % k == 0 && y % k != 0)
        {
            ans = x / k + y / k + ((y-(y/k))/k);
        }
        else if(x%k!=0 && y%k==0){
            ans = y / k + x / k + ((x-(x/k))/k);
        }
        else if(x==0){
            
        }
        else
        {
            ans = y / k + x / k + ((x-(x/k))/k)+((y-(y/k))/k); 
        }
        cout<<ans<<"\n";
    }
}