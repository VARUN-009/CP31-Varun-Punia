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

    map<char, int> mp1, mp2;
    trav(ch, str)
    {
        mp1[ch]++;
    }
    int ans = INT_MIN;

    // saare possible partitions lelo bss a bcabcd, ab cabcd, abc abcd and so on...and mp1 m remove karte raho then mp2 m add haa agr remove ke baad 0 ho jaye toh hta do usko and then dono ka size dekhlo kitna hai 
    trav(ch, str)
    {
        mp2[ch]++;
        mp1[ch]--;
        if (mp1[ch] == 0)
        {
            mp1.erase(ch);
        }
        ans = max(ans, (int)mp1.size() + (int)mp2.size());
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