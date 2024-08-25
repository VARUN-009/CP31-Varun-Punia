#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int> vec
#define len(x) (x).size()
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoi stoll

// Control Flow
#define loop(i, a, b) for (int i = a; i < (b); i++)
#define rloop(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    int n, k;
    cin >> n >> k;

    vi(n * k);
    loop(i, 0, n * k)
    {
        cin >> vec[i];
    }

    // m humesha chahunga ki mera mid element bada ho toh last se ho and like 5 hai toh 2 start ke ho and 3 last ke toh n/2 karunga toh mid mera last m se ek hoga and ye mujhe k times karna hai bss
    int ans = 0;
    int required = (n / 2) + 1;
    int idx = len(vec) - required;
    while (k--)
    {
        ans += vec[idx];
        idx -= required;
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