#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
#define len(x) (x).size()
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoi stoll

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
    int idx = 0;
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    int ans = 0;
    // ek number hai and toh check karlo ki usko konse index m hona chahiye tha toh k mujhe aisa lena padega jo sabko divide karta ho example ki diff aarha h 2 4 6 toh k lelo 2 toh sabko sahi jagah par rakh sakte ho then tum sabse bada number jo sabko divide karta ho toh gcd lena padega 
    loop(i, 0, n)
    {
        if(vec[i] != i+1) {
            int diff = abs(i - (vec[i]-1));
            ans = __gcd(ans, diff);
        }
    }

    cout << ans << endl;
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