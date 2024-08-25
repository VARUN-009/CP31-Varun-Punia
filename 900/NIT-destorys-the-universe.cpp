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
#define rloop(i, b, a) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    int n;
    cin >> n;

    vi(n + 1, 0);

    loop(i, 1, n+1)
    {
        cin >> vec[i];
    }

    // Agr saare 0 hoge toh ans is 0 and saare non zero toh ans is 1. Answer humesha 0 1 2 m se ek hoga combination hai and non zero ka toh m vo part uthaunga jo 2 zero ke beech m hai and usko 0 bna dunga and ans++;

    int ans = 0;

    loop(i, 1, n+1)
    {
        if (vec[i - 1] == 0 && vec[i] != 0)
        {
            ans++;
        }
    }

    cout << min(ans, 2LL) << endl;
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