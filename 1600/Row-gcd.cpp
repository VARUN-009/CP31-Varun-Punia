#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

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
    int n, m;
    cin >> n >> m;

    vi a(n);
    vi b(m);

    loop(i, 0, n)
    {
        cin >> a[i];
    }

    loop(i, 0, m) 
    {
        cin >> b[i];
    }

    int first = a[0];
    int start_gcd = 0;
    loop(i, 1, n)
    {
        start_gcd = __gcd(start_gcd, abs(a[i] - first));
    }

    int final_gcd = 1;

    loop(j, 0, m)
    {
        int now = __gcd(first + b[j], start_gcd);
        cout << now << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios;

    int t = 1;
    // cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}