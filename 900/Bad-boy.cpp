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
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    cout << 1 << " " << 1 << " " << n << " " << m << endl;
    // isme trick ye hi hai ki jin 2 cells m mein place karunga apne yoyo ko vo sabse durr durr hone chahiye ya toh aap har pair of corners ko check karlo jo jo possible pairs banege because corners m hi rakhege if you observe in test cases they are placed in corners many times -- and placing in 1,1 and n,m will give you the maximum distance iss se km karoge toh distance km hoga as answer will always be in the opposite corners
    // maximum distance vo 2(m-1) + 2(n-1) hi karega jo ek taraf se km hua vo dusri taraf se badhega na
    // irrespective ki konse pair of corners m put kiya hai maximum distance will always be 2(n-1) + 2(m-1) as anton can only travel in adjacent cells vertically / horizontally
    // first cell 1,1 and last cell n,m - so place it in first and last cell
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