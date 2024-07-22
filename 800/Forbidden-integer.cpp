#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n, k, x;
    cin >> n >> k >> x;

    for (int i = k; i >= 1; i--)
    {
        if (i != x && n % i == 0)
        {
            cout << "YES" << endl;
            cout << n/i << endl;
            for (int j = 1; j <= n / i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << "NO" << endl;
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