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
    int n, x;
    cin >> n >> x;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // inequality was mod of v - ai should be <= x then on solving it we can say that -x <= v-ai <= x so then ai-x <= v <= ai+x

    vi interval = {vec[0] - x, vec[0] + x};
    int changes = 0;
    loop(i, 1, n)
    {
        vi new_interval = {vec[i] - x, vec[i] + x};
        vi overlap = {max(interval[0], new_interval[0]), min(interval[1], new_interval[1])};
        // case when jab kuch overlap/intersection ni ho rha hai toh ab mujhe change hi karna padega v ko toh ab jo naya bana hai current uske equal kardo interval ko
        if (overlap[0] > overlap[1])
        {
            changes++;
            interval = new_interval;
        }

        // agr hai overlap then jo sabse common hai andar ka intersection ka abhi tak ka uske equal kardo bss
        else
        {
            interval = overlap;
        }
    }

    cout << changes << endl;
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