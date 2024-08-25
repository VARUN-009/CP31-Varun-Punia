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
    int x, n;
    cin >> x >> n;
    int gap = 1;
    int ans = 0;

    // dry run karoge toh pta chlega ki har 4th step m value 0 ho rahi hai toh remainder hoga 0 1 2 3 toh m check karlunga ki in in remainders m kya kya distance aarha hai and even m right jaa rha hai vo toh +d and odd m left toh -d
    int distance = 0;
    switch (n % 4)
    {
    case 0:
        distance = 0;
        break;

    case 1:
        distance = -n;
        break;

    case 2:
        distance = 1;
        break;

    case 3:
        distance = n + 1;
    }

    if (even(x))
    {
        cout << x + distance << endl;
    }
    else
    {
        cout << x - distance << endl;
    }
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