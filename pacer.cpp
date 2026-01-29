#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n, m;
        cin >> n >> m;
        int side = 0;
        int time = 0;
        int points = 0;

        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            int curtime = a - time;
            if (side == 0)
            {
                points += curtime;
                if (b == 1)
                {
                    if (curtime % 2 == 0)
                    {
                        points--;
                    }
                }
                    else
                    {
                        if (curtime % 2 == 1)
                        {
                            points--;
                        }
                    }
            }
                else
                {
                    points += curtime;
                    if (b == 0)
                    {
                        if (curtime % 2 == 0)
                        {
                            points--;
                        }
                    }
                    else
                        {
                            if (curtime % 2 == 1)
                            {
                                points--;
                            }
                        }
                }
            }
            time=a;
            side=b;
             points+=m-time;
        cout<<points<<endl;
        }

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}