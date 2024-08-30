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
    int n;
    cin >> n;

    vi a(n);
    vi b(n);

    loop(i, 0, n)
    {
        cin >> a[i];
    }
    loop(i, 0, n)
    {
        cin >> b[i];
    }

    vector<int> count1(2 * n + 1, 0);
    vector<int> count2(2 * n + 1, 0);

    // mein group bna lunga ki same hi element kitni baar repeat ho rha hai like [2 2 1 2 2 ] array hai dono hi same hai toh mein calculate karlunga 2 2 toh 2 baar aarha consecutively then m neeche wale array m dekhunga ki isme kitni baar aarha usme bhi 2 hi baar toh total 4 baar
    // 2 2 ke baad 1 hai na toh m aage tohni dekh sakta toh m neeche dekhta hu and vice versa toh group kardo same elements ko

    // combination tera kuch bhi bn sakta hai tujhe bss dekhna hai ki vo element max kitni baar aarh a hai saath m uss array m and neeche wale array har element ke liye aisa hi karo and then jiska combination sabse jyada ho vo ans

    loop(i, 0, n)
    {
        int j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }
        count1[a[i]] = max(count1[a[i]], j - i);
        i = --j;
    }

    loop(i, 0, n)
    {
        int j = i;
        while (j < n && b[j] == b[i])
        {
            j++;
        }
        count2[b[i]] = max(count2[b[i]], j - i);
        i = --j;
    }

    int ans = 0;
    loop(i, 0, 2 * n + 1)
    {
        ans = max(ans, count1[i] + count2[i]);
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