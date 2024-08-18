#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    int a, b, n;
    cin >> a >> b >> n;

    vi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int idx = 0;
    int timer = b;
    // jitna abhi time hai utne se hi start karo na then 0 hoga toh phtt jayega toh jaise hi vo 1 hoga usme add kardena
    for (int i = 0; i < n; i++)
    {
        timer += min(1 + vec[i], a) - 1;
        // we can also write it like min(vec[i], a-1) as 1+vec[i]-1 will be vec[i] and since answer can be either 1+vec[i]-1 or a-1 so min(vec[i], a-1).
        // extra 1 add because 0 hojaye tab m add karta par abhi 1 m hi kar rha hu toh that's why +1.
    }

    cout << timer << endl;
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