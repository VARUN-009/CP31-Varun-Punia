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

    int ans = 0;
    loop(i, 1, n + 1)
    {
        if (n % i == 0)
        {
            int gcd = 0;
            int k = n / i;

            for (int i = 0; i + k < n; i++)
            {
                gcd = __gcd(gcd, abs(vec[i] - vec[i + k]));
            }

            ans += (gcd != 1);
        }
    }

    cout << ans << endl;
}
/*
Mujhe partition karni hai and sab subarrays ek fixed k size ke hone chahiye and agr m unko mod karu m se toh sab identical bn jaye matlab eg- 3 subarrays bane hai toh teeno identical after taking mod toh means A0 % m should be equal to A0+k % m and so on...0 index ka 0+k index ke equal hona chahiye after taking mod toh rhs ko left m le jao then A0 - A0+k % m == 0 % m means m is a factor of their difference. 

Ab differences kai saare aa sakte hai toh saare nikalo and then ek aisa m choose karna padega jo sabhi ko divide kare toh saare differences ka gcd lelo and then ek aisa number aayega jo sab differences ko divide karega and vo end m jo G aayega gcd vo != 1 hona chahiye kyuki 0 aayega means saare subarrays pehle se hi same the toh difference leke gcd 0 and >=2 toh hume chahiye hi toh bss != 1. 

eg k = 3 and len = 6 toh 0th % m == 0+kth % m 0th index wala 3rd index wale se compare 1st index wala 4th index wale se compare and so on.
*/

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