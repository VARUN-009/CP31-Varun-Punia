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
    int n;
    cin >> n;

    string str;
    cin >> str;

    // jo yes and no wale ques hote hai ye usme jaanke aisa example dete h jo confusing ho toh halka sa observe karna hota hai and simple hi hota hai answer
    loop(i, 0, n - 1)
    {
        if (str[i] > str[i + 1])
        {
            cout << "YES" << endl;
            cout << i+1 << " " << i + 2 << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}