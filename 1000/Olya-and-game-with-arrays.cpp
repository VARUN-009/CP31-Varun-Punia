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

    int global_min = INT_MAX;
    vi help;
    loop(i, 0, n)
    {
        int m;
        cin >> m;

        vi vec(m);

        loop(i, 0, m)
        {
            cin >> vec[i];
        }

        // sabse chota element jo hoga vo toh tera part hoga hi na, vo lele global min and then koi n-1 array ka 2nd minimum lena hai usme se jo sabse bade vo lelo. DRY RUN IT. GREEDY
        int minele = *min_element(all(vec));
        global_min = min(global_min, minele);

        vec.erase(find(all(vec), minele));

        help.pb(*min_element(all(vec)));
    }

    cout << global_min + accumulate(all(help), 0LL) - *min_element(all(help)) << endl;
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