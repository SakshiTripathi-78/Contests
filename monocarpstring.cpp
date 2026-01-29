#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnta = 0;
        int cntb = 0;
        for (char c : s)
        {
            if (c == 'a')
            {
                cnta++;
            }
            else if (c == 'b')
            {
                cntb++;
            }
        }
        if (cnta == cntb)
        {
            cout << 0 << "\n";
        }
        else if (cnta > cntb)
        {
            for (char c : s)
            {
                if (c == 'a')
                {
                    cnta--;
                    if (cnta == cntb)
                    {
                        cout<<cnta<<"\n";
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else if (cnta < cntb)
        {
            for (char c : s)
            {
                if (c == 'b')
                {
                    cntb--;
                    if (cnta == cntb)
                    {
                        cout<<cntb<<"\n";
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            cout << "-1" << "\n";
        }
    }
}