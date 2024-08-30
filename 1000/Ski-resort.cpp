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
    int n, k, q;
    cin >> n >> k >> q;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    int count = 0;
    int ans = 0;

    loop(i, 0, n)
    {
        if (vec[i] <= q)
        {
            count++;
        }
        else
        {
            if (count >= k)
            {
                // ye formula to get continuous subsets of minimum length k -- bss ye hi formula tha poore ques m
                ans += ((count - k + 1) * (count - k + 2)) / 2;
            }
            count = 0;
        }
    }

    if (count >= k)
    {
        ans += ((count - k + 1) * (count - k + 2)) / 2;
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