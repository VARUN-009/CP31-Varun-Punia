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
    int n, x;
    cin >> n >> x;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    int low = 0;
    int high = 2e9;
    int ans = 0;

    // we have to find the maximum height with a certain upper bound ki max upr itna hi jaa sakta hai x toh uske according nikalni hai...to binary search on answer ki abhi itni mili hai dekhte hai iske aage milegi ya nhi...high ko 2e9 ya max lelo sabse and then mid nikalo.
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0;
        trav(ele, vec)
        {
            sum += max(mid - ele, 0LL);
        }

        if (sum > x)
        {
            // ye height ho gayi jyada toh high ko km karo
            high = mid - 1;
        }
        else
        {
            // storing the ans as current mid  and aur aage dekho ki aur badi mil sakti hai ki nhi
            ans = mid;
            low = mid + 1;
        }
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