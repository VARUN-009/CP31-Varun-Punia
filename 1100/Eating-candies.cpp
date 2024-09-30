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

    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    int left = 0;
    int right = n - 1;
    int leftsum = 0;
    int rightsum = 0;
    int ans = 0;

    // left se add karte chlo and right se add karte chlo agr kisi point m dono ke sum same ho jaye toh number of candies count karlo.
    while (left <= right)
    {
        if (leftsum == rightsum)
        {
            ans = max(ans, left + (n - right - 1));
            leftsum += vec[left++];
        }
        else if (leftsum < rightsum)
        {
            leftsum += vec[left++];
        }
        else
        {
            rightsum += vec[right--];
        }
    }

    // incase saari hi candies kha sakte hai toh phir n ho jayega na ans.
    if (left > right && leftsum == rightsum)
    {
        ans = max(ans, n);
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