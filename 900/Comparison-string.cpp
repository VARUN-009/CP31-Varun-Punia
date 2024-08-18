#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoll stoi

// Control Flow
#define loop(i, a, b) for (int i = a; i < (b); i++)
#define rloop(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    int n;
    cin >> n;

    string str;
    cin >> str;
    int count = 1;
    int ans = INT_MIN;

    // Guess was to find the longest sequence of same characters + 1 -- just observed it from the test case and it worked out :-)
    loop(i,0,n) {
        if(str[i] == str[i+1] ) {
            count++;
        }
        else {
            ans = max(ans, count);
            count = 1;
        }
    }

    cout << ans + 1 << endl;
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