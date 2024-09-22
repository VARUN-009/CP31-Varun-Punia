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
    int n, q;
    cin >> n >> q;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    int maxi = *max_element(all(vec));

    vi modi;
    loop(i, 0, q)
    {
        int ele;
        cin >> ele;
        if ((int)pow(2, ele) <= maxi)
        {
            modi.pb(ele);
        }
    }

    loop(i, 0, len(modi))
    {
        loop(j, 0, n)
        {
            if (vec[j] % (int)pow(2, modi[i]) == 0)
            {
                vec[j] += pow(2, modi[i] - 1);
            }
        }
    }

    trav(ele, vec)
    {
        cout << ele << " ";
    }
    cout << endl;
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