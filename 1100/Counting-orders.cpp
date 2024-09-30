#include <bits/stdc++.h>
using namespace std;

// Constants
const long long MOD = 1e9 + 7;
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

    vi a(n), b(n);
    loop(i, 0, n)
    {
        cin >> a[i];
    }

    sort(all(a));

    loop(i, 0, n)
    {
        cin >> b[i];
    }

    // a ko sort kardiya for upper bound toh vo toh karna hai and now b ko reverse order m iss karke kara ki ki end se dekhege eg - 5th index m 4 elements laga sakta hai and n=7 toh 6th pos se bade tere 5th pos se bade hoge hi and 5th m tere saare bade hoge toh 1 toh 6th m lagana padega na toh isliye -- dono ko sort karke simple end se bhi start kar sakte hai phir usme lower bound lena padega 
    sort(all(b), greater<int>());

    int ans = 1;

    // upper bound bta deta hai ki current value se bada element kahan pe hai and agr ni hai toh end iterator return karta hai

    // lower bound bta deta h ki current value se left m kahan tak elements >= hai
    loop(i, 0, n)
    {
        int count = n - (upper_bound(all(a), b[i]) - a.begin());

        // agr manlo current b[i] se bade elements ni hai toh matlab answer 0 ho jayega technically 1 bhi way ni hai toh upper bound will give end() then end() - begin() = n and n - n = 0 so count = 0
        // isko aise bhi kar sakte the ki if wala hta do and ans *= max(count-i,0) aise bhi 0 aajata.
        if (count == 0)
        {
            ans = 0;
            break;
        }

        // * has higher precedence than MOD so if you write like ans *= then MOD will be done at the end and before it answer will be calculated - subtle error
        ans = ans * (count - i) % MOD;
    }

    cout << ans << endl;
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