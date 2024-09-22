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

    int sum = vec[0];

    // answer ko sum (vec[0]) hi lelo warna -1000 wale test case m answer INT_MIN hi aayega 
    int ans = sum;
    loop(i, 1, n)
    {
        // parity find karni hai negative numbers ki toh abs use karna hota h kyuki -3%2=-1 and 3%2==1 toh difference aa sakta hai hai 3 -3 hote toh hai dono ki odd par answer different aata bsss 
        if (abs(vec[i]) % 2 != abs(vec[i - 1]) % 2)
        {
            sum += vec[i];
        }
        else
        {
            sum = vec[i];
        }

        // bss ye ek negative wala case hai ki manlo -1 4 hai then sum karoge toh 3 aayega par sum < vec[i] se toh aisa ho toh bhai sum ko issi element ke equal kardo bss
        if (sum < vec[i])
        {
            sum = vec[i];
        }

        ans = max(ans, sum);
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