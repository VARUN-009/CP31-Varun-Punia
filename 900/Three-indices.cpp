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

    vi(n);

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    loop(i, 1, n - 1)
    {
        if (vec[i - 1] < vec[i] && vec[i] > vec[i + 1])
        {
            cout << "YES" << endl;
            cout << i << " ";
            cout << i + 1 << " ";
            cout << i + 2 << endl;
            return;
        }
    }

    cout << "NO" << endl;
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