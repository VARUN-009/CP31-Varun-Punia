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
#define rloop(i, b, a) for (int i = (b); i >= a; i--)
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

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    vi suffix_gcd(n);
    suffix_gcd[n - 1] = vec[n-1];
    rloop(i, n - 2, 0)
    {
        suffix_gcd[i] = __gcd(vec[i], suffix_gcd[i + 1]);
    }

    int final_gcd = 0;
    loop(i, 0, n-1)
    {
        int ans = __lcm(vec[i], suffix_gcd[i + 1]);
        final_gcd = __gcd(final_gcd, ans);
    }

    cout << final_gcd << endl;
}

/*
gcd(lcm(a,b), lcm(a,c), lcm(a,d)) = lcm(a, gcd(b,c,d))
ye property hoti hai ek and iska reverse bhi same hota hai 
lcm(gcd(a,b), gcd(a,c), gcd(a,d)) = gcd(a, lcm(b,c,d))
bss pehle ek suffix gcd nikal lo ek array se and then jis point m ho vo and uske aage ka gcd in dono ka lcm lelo and then lcm calculate karteraho bss 

This is because zero times any integer is zero, and thus it is the smallest number that can be divided by both 0 and n.
lcm(0,n) = 0

This is because the smallest multiple of both 1 and n that can be divided by both is n.
lcm(1,n) = n

This is because any number divides zero, and the largest number that divides both 0 and n is n itself.
gcd(0,n) = n

This is because 1 is the only positive integer that divides every integer.
gcd(1,n) = 0

*/

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