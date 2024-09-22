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

    char ch;
    cin >> ch;

    string str;
    cin >> str;

    // vo wapsi start se light change hogi toh meine double leli string ko matlab 2 baar then iterate karo and sabse bada distance jo hai vo lena hai bss and jab jo ch hai vo legth ke aage mile then break kardo 
    string help = str;
    help += str;
    int count = 0;
    bool found = false;
    int idx = -1;
    int ans = INT_MIN;
    loop(i, 0, len(help))
    {
        if (!found && help[i] == ch)
        {
            found = true;
            idx = i;
        }

        if (idx > n)
        {
            break;
        }

        if (found && help[i] == 'g')
        {
            ans = max(ans, i - idx);
            found = false;
            idx = -1;
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