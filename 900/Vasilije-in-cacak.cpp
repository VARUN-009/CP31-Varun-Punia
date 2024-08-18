#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

// Helper Functions
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

void vishu()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll totalsum = (n * (n + 1)) / 2;
    ll minsum = (k * (k + 1)) / 2;
    ll maxsum = totalsum - ( ((n - k) * (n - k + 1)) / 2 );
    if (x >= minsum && x <= maxsum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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