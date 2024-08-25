#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int> vec
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
    int n, x;
    cin >> n >> x;

    vi(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // guess bss ye hi tha ki ya toh sum ko divide karo x se ya toh individually divide karo elements ko x se and mathematically bhi (a+b)/x <= a/x + b/x; toh sum wala chotta hoga and individual wala bada hoga
    int ans1 = 0;
    trav(num, vec)
    {
        ans1 += num / x + (num % x != 0);
    }

    // dont't forget to convert 0 to 0LL
    int sum = accumulate(all(vec), 0LL);
    int ans2 = sum / x + (sum % x != 0);

    cout << ans2 << " " << ans1 << endl;
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