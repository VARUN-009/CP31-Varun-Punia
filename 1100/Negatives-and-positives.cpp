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
    int n;
    cin >> n;

    vi vec(n);
    bool found = false;
    int negatives = 0;
    int sum = 0;
    int mini = INT_MAX;

    // calculate karne ki need hi ni operations karne ki need hi ni hai bss check karlo negatives kitne hai odd hai toh bss zero hai ki ni kyuki -0 = 0 toh sab phir positive bn sakte hai and agr zero nhi hai toh phir sabse chota element hta do kyuki ye operation tum kitni hi baar kar sakte ho
    loop(i, 0, n)
    {
        cin >> vec[i];
        sum += abs(vec[i]);
        if (vec[i] < 0)
        {
            negatives++;
        }
        if (vec[i] == 0)
        {
            found = true;
        }

        mini = min(mini, abs(vec[i]));
    }

    if (negatives % 2 != 0)
    {
        if (found)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * abs(mini) << endl;
        }
    }
    else
    {
        cout << sum << endl;
    }
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