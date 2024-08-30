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
    int n, k;
    cin >> n >> k;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    vector<pair<int, int>> ans;

    // m k k karke km kar rha hu values toh ek time aisa aayega ki jo meri values hai vo meri k ke equal ho jayegi ya k se hi km agr aisa hua toh m sabse pehle toh k walu htaunga then k-1 then k-2 and so on...
    // -ve index iss wajah se kyuki sort karne ke baad incase last m dono ki same value hai toh last element vo hoga jiska index bada hoga and -1 > -3
    loop(i, 0, n)
    {
        if (vec[i] % k == 0)
        {
            ans.push_back({k, -i});
        }
        else
        {
            ans.push_back({vec[i] % k, -i});
        }
    }

    sort(all(ans));

    rloop(i, n, 0)
    {
        cout << abs(ans[i].second) + 1 << " ";
    }
    cout << endl;
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