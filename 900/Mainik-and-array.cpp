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

    // Let's make 1-based index array so it will be easier to solve
    vi(n + 1);

    // ab dekho case bante hai sirf 4 hi hai
    // 1. ki jo abhi 1 and n pos m hai unko hi lelo
    // 2. 1 pos ko fix kardo and uske baad wale jo elements hai unko ek ek aage badha do and usme se jo max element hai vo lelo
    // 3. same as above bss n wale ko same rakho and n-1 se 1 tak ko dekho
    // 4. and ab tum poore array ko hi as a subsegment treat kar rahe
    // [1 2 3 4 5] - 1 & 5
    // [5 1 2 3 4] - 4 & 5
    // [4 5 1 2 3] - 3 & 4
    // [3 4 5 1 2 ] - 2 & 3
    // [2 3 4 5 1] - 1 & 2

    loop(i, 1, n + 1)
    {
        cin >> vec[i];
    }

    // case - 1
    int ans = vec[n] - vec[1];

    // case - 2
    loop(i, 2, n + 1)
    {
        ans = max(ans, vec[i] - vec[1]);
    }

    // case - 3
    loop(i, 1, n)
    {
        ans = max(ans, vec[n] - vec[i]);
    }

    // case - 4
    loop(i, 1, n)
    {
        ans = max(ans, vec[i] - vec[i + 1]);
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
