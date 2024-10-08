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
    string a, b;
    cin >> a >> b;

    int m = len(a);
    int n = len(b);

    // constrains chote hai toh m brute force kar sakta hu toh substrings nikalte raho bss and then usko dusre m find karo and agr mil gya then uski length ko string ki length se minus...m chahta hu ki badi se badi subtring common mile dono m jiss se ki characters km hi htane pade
    // worst case m toh aisa ho sakta hai na ki dono m se koi bhi common ni hai toh dono ke saare hi lelo 
    int ans = m+n;
    loop(i, 0, m)
    {
        // j=1 because mininmum 1 length ki leni hai na
        loop(j, 1, m - i + 1)
        {
            string str = a.substr(i, j);
            if (b.find(str) != string::npos)
            {
                ans = min(ans, (m - j) + (n - j));
            }
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