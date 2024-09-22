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
    int w, h;
    cin >> w >> h;
    int ans = INT_MIN;

    // points ascending order m de rakhe hai toh 1st and last point lelo vo base bn jayega toh base maximum ho gya then agr horizontal points liye hai toh y axis and vertical points liye hai toh x axis ho jayega height and bss base * height hi karna hai kyuki triangle area = 1/2 * b* h toh iska double is b*h
    loop(i, 0, 4)
    {
        int k;
        cin >> k;
        vi points(k);

        loop(i, 0, k)
        {
            cin >> points[i];
        }

        ans = max(ans, (points[k - 1] - points[0]) * (i < 2 ? h : w));
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