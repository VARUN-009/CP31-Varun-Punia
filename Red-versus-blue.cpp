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
    int n, r, b;
    cin >> n >> r >> b;

    int extras = r % (b + 1);
    int grouped = r / (b + 1);

    // sabse km tere b hai toh unko 1-1 ke gap m lga de then tere pass spaces aajayegi ab b+1 jahan tu r laga sakta hai ab total r divided by spaces se aajayega kitne group karne hai and kahin kahin extra lagane pade then extras aajayega mod se ki extra kitne 

    // toh pehle extra lagao then total b jitne hai utne uske baad end m grouped ek baar bsss 
    loop(i, 0, extras)
    {
        cout << string(grouped + 1, 'R') << 'B';
    }

    loop(i, extras, b)
    {
        cout << string(grouped, 'R') << 'B';
    }

    cout << string(grouped, 'R') << endl;
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