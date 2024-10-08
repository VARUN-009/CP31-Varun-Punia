#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
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

    vi(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    sort(all(vec));

    int ans = 0;
    int count = 1;
    loop(i, 1, n)
    {
        if (vec[i] - vec[i-1] > k)
        {
            ans = max(ans, count);
            count = 1;
        }
        else
        {
            count++;
        }
    }

    ans = max(ans, count);

    cout << n - ans << endl;
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