#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int>
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

    string str;
    cin >> str;

    vi vec(n + 1, 0);

    // Twist bss itna hai ki k segment ka chahiye na toh har possible k segments m kitne white hai ye nikal lo and then jisme sabse km ho answer
    loop(i, 1, n + 1)
    {
        vec[i] = vec[i - 1] + (int)(str[i - 1] == 'W');
    }

    int ans = INT_MAX;
    // Zero wala case bhi automatically handle ho jayega because jisme saare hi black hai usme ans is 0.
    loop(i, k, n + 1)
    {
        ans = min(ans, vec[i] - vec[i - k]);
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