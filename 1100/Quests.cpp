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
    int n, k;
    cin >> n >> k;

    vi first(n), second(n);

    loop(i, 0, n)
    {
        cin >> first[i];
    }

    loop(i, 0, n)
    {
        cin >> second[i];
    }

    int ans = 0;
    int sum = 0;
    int again = 0;

    // dekho jisme ho usko lelo sum m add kardo and then jo abhi tak second time sabse max value hai usko hi k-i-1 times lelo aise karlo... har case ke liye check karlo and then end m ans is max. k-i-1 because i times toh tum first wala hi le rahe ho aage badh rahe ho and then bche hue times second wala that's why min(n,k) because k=2 and n=5 hai toh 2 hi baar loge na that's why
    loop(i, 0, min(n, k))
    {
        sum += first[i];
        again = max(again, second[i]);
        ans = max(ans, sum + again * (k - i - 1));
    }

    cout << ans << endl;
}

int32_t main()
{
    ios;

    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}