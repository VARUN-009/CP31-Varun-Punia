#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int>
#define vii vector<vector<int>>
#define vip vector<pair<int, int>>
#define pii pair<int, int>
#define len(x) (x).size()
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoi stoll

// Control Flow
#define loop(i, a, b) for (int i = a; i < (b); i++)
#define rloop(i, b, a) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }
int __lcm(int a, int b) { return (a * b) / __gcd(a, b); }

void vishu()
{
    int n, k;
    cin >> n >> k;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    sort(all(vec));
    vi prefix(n + 1, 0);
    loop(i, 1, n+1)
    {
        prefix[i] = prefix[i - 1] + vec[i - 1];
    }

    int ans = LLONG_MIN;

    // n+1 prefix because ek case m prefix ka index -1 bhi jaa rha hai toh agr n hota toh -1 so n+1 means 0  -- always try to take prefix as n+1
    loop(i, 0, k + 1)
    {
        ans = max(ans, prefix[n - i] - prefix[2 * (k - i)]);
    }

    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}