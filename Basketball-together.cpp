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
    int n, d;
    cin >> n >> d;

    vi vec(n);

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    sort(all(vec));

    // trick bss ye hi hai ki sabse bada lo and then left se lete raho jab tak sum jyada na ho jaye left=0 hua then left<=right karna padega kyuki vo ek extra aage hoga pehle se toh left=0 bhi kar sakte ho -1 m exact pos m rahega 
    int left = -1;
    int right = n - 1;
    int ans = 0;
    int curr = vec[right];
    while (left < right)
    {
        if (curr <= d)
        {
            left++;
            curr += vec[right];
        }
        else
        {
            right--;
            ans++;

            curr = vec[right];
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    vishu();

    return 0;
}