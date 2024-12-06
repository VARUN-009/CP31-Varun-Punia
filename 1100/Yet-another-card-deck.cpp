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
    int n, q;
    cin >> n >> q;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    while (q--)
    {
        int query;
        cin >> query;

        // O(N) m pta chl jayega worst case m ki ye kahan hai element query wala toh iski pos nikalo ye ek iterator return karta hai and usme se vec.begin() minus kardo toh pos mil jayegi 0 based index se  usme + 1 to get exact position
        int pos = find(vec.begin(), vec.end(), query) - vec.begin();
        cout << pos + 1 << " ";

        // first parameter is kahan se rotate karna hai start pos and second is kis element ko first bnana hai and 3rd is kahan tak rotate karna hai last range ye end + 1 hota hai jiss se ki end + 1 element se pehle tak saare rotate ho jaye end + 1 wala as it is rahe
        rotate(vec.begin(), vec.begin() + pos, vec.begin() + pos + 1);
    }
    cout << endl;
}

int32_t main()
{
    ios;

    int t = 1;
    // cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}