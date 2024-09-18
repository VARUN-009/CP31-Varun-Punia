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
    int n;
    cin >> n;

    string str;
    cin >> str;

    int open = 0, close = 0, ans = 0;

    // open mil rha hai toh acha hai na close toh aage milege and agr close hi mile then vo close tujhe aage leke jane padege toh jitne baar close jyada hue then ans++ and un close ko km kardena ki haa tumne gin liye hai unko -- open mile koi dikkat ni hai par agr jyada hi close mil gaye toh pakka unko aage shift karna padega kyuki open=close count
    loop(i, 0, n)
    {
        if (str[i] == '(')
        {
            open++;
        }
        else
        {
            close++;
        }

        if (close > open)
        {
            ans++;
            close--;
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