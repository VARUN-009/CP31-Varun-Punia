#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int> vec
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
    int zeros = 0;
    loop(i, 0, n)
    {
        cin >> vec[i];
        if (vec[i] == 0)
        {
            zeros++;
        }
    }
    // twist itna hi hai ki n-1 chahiye sum toh 1 check karlo hai ki ni jahan 1 mil gya means ki uske alawa sabka sum n-1 hai. Now agr uss subsequnce m 0 hai toh m pakka zeros ko le bhi sakta hu and ni toh 2^n where n = no. of zeros toh agr 3 zero hai toh m 8 possible combinations bna sakta hu 2 hai toh 4 -- dry run this 
    int ans = 0;
    
    loop(i, 0, n)
    {
        if (vec[i] == 1)
        {
            ans += zeros > 0 ? pow(2,zeros) : 1;
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