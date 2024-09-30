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
    int n;
    cin >> n;

    vi vec(n);

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    //for palindrome ai = an-i-1 so in this ai mod x = a n-i-1 mod x --> (ai - an-i+1) % x = 0 which means x divides (ai - an-i+1) so iterate karke i ki saari values m and then nikal le jo jo values hai then tere pass values hai and we want ki x in sabko divide kare toh mujhe ek aisa number chahiye jo sabse bada ho and in sabko divide kare - GCD greatest common divisor.  abs for -ve numbers
    int ans = 0;
    loop(i, 0, n)
    {
        ans = __gcd(ans, abs(vec[i] - vec[n - i - 1]));
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