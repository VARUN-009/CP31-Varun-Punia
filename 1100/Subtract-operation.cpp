#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

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
    int n, k;
    cin >> n >> k;

    vi vec(n);
    map<int, int> mp;

    // a b c d let's say we remove b so a-b, c-b, d-b and then say we remove a-b so c-b-(a-b), d-b-(a-b)  which ultimately is c-b, d-a, so at the end we will always get difference of two elements of array so jab end m mujhe difference hi mil rahe hai toh m ek kaam karta hu na jo jo possible differnces hai check karleta hu ki koi k ke equal hai ki nhi.

    // instead of map we can also sort array and use 2 pointers to check ki difference k ke equal hai ki nhi hai
    loop(i, 0, n)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }

    loop(i, 0, n)
    {
        if (mp[vec[i] - k] != 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int32_t main()
{
    ios;

    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}