#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int>
#define vii vector<vector<int>>
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

    vii vec2d(n, vi(m));

    int mini = INT_MAX;
    int sum = 0;
    int negatives = 0;
    bool zero = false;
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            int num;
            cin >> num;
            vec2d[i][j] = num;
            sum += abs(num);

            if (num < 0)
            {
                negatives++;
            }

            if (num == 0)
            {
                zero = true;
            }

            mini = min(mini, abs(num));
        }
    }

    if (negatives % 2 == 0)
    {
        cout << sum << endl;
    }
    else if (zero)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - 2 * mini << endl;
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