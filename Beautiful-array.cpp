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
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    // 14/7=2 and 20/7=2 minimum k*b hoga and max k*b ke saath hi har element m k-1 aur add kardu kyuki beauty same hi rahegi and divide karega k se toh 0 hi aayega 
    if (s < k * b || s > k * b + n * (k - 1))
    {
        cout << -1 << endl;
        return;
    }

    // k*b dalde and then sum se hta de bacha hum distribute karde poora array m 
    vi vec(n, 0);
    vec[0] = k * b;
    s -= k * b;

    // maanle sum jyada hi aarha hai toh tu jyada bada number toh ni hi daal sakta na toh k-1 then usko sum se minus and ek samay jab sum chota ho jayega tunne sum dala then usko sum m se minus kiya then toh sum = 0 ho jayega na
    loop(i, 0, n)
    {
        int x = min(k - 1, s);
        vec[i] += x;
        s -= x;
    }

    trav(ele, vec)
    {
        cout << ele << " ";
    }
    cout << endl;
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