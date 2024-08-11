#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n, k, x;
    cin >> n >> k >> x;

    // case - 1 ki x!=1 which means ki m kitni hi baar 1 le sakta hu
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }

    // case-2 x==1 which means m 1 ni le sakta toh ab agr ye check karlo ki k==1
    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }

    // case - 3 now x is 1 and k != 1 n is odd but i can only take till 2 but n is odd so cannot be done
    if (k == 2 && n % 2)
    {
        cout << "NO" << endl;
        return;
    }

    // case-4 now k 2 hoga toh n is even which can be done and if k != 2 (let's say k is 3) then n can be odd or even both of which can be done
    cout << "YES" << endl;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << n / 2 << endl;
        cout << 3 << " ";
        for (int i = 1; i <= n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}