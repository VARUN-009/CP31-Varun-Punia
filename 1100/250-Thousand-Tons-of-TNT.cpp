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
    int n;
    cin >> n;

    vi vec(n);

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // agr ek hi box hai toh 0 hi kyuki vahi max and vahi min
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int ans = INT_MIN;
    // half tak hi because uske aage toh unequal separations ho jayege 
    loop(i, 1, (n / 2) + 1)
    {
        if (n % i == 0)
        {
            int count = 0;
            int minsum = LLONG_MAX;
            int maxsum = LLONG_MIN;
            int sum = 0;
            loop(j, 0, n)
            {
                sum += vec[j];
                count++;

                if (count == i)
                {
                    minsum = min(minsum, sum);
                    maxsum = max(maxsum, sum);
                    sum = 0;
                    count = 0;
                }
            }

            ans = max(ans, maxsum - minsum);
        }
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