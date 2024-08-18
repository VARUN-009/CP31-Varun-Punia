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
    int n, q;
    cin >> n >> q;

    // since it is 1-based indexing so taking n+1
    // yahan pe sum ka kaam hai toh chances hai ki prefix sum use ho sakta hai -- pattern
    vi(n + 1);
    int sum = 0;
    vector<int> prefix(n + 1);

    loop(i, 1, n + 1)
    {
        cin >> vec[i];
        sum += vec[i];
    }

    prefix[1] = vec[1];
    loop(i, 2, n + 1)
    {
        prefix[i] = prefix[i - 1] + vec[i];
    }

    loop(i, 0, q)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int total = prefix[n] - (prefix[r] - prefix[l - 1]) + (r - l + 1) * k;
        if (total % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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