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
    int n, coins;
    cin >> n >> coins;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
        vec[i] = vec[i] + i + 1;
    }

    sort(all(vec));

    // jitni pos aage jana hai and then uski cost toh dekha jaye toh total ho gya pos + cost toh meine array ka element hi aise bna liya ab then usko sort karliya ki sabse km cost itni chahiye then badh rahi hai toh agr coins se jyada ho gayi cost toh bss jo pos hai vo hi hai ans and agr poora array iterate kar gaye then teleports will be n.

    // We can also use a priority queue in this as it will have min at the top.

    // lene ko hum vec pair<int,int> bhi le sakte the cost, pos ka toh dono ko subtract karte coins se par this is the simplest way. 
    loop(i, 0, n)
    {
        coins -= vec[i];
        if (coins < 0)
        {
            cout << i << endl;
            return;
        }
    }

    cout << n << endl;
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