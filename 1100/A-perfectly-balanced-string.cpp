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
    string s;
    cin >> s;

    // jab jab unique cheeje chahiye count chahiye - we can use set
    set<char> st;
    trav(ch, s)
    {
        st.insert(ch);
    }

    bool correct = true;
    // perfectly balanced bnane ke liye mujhe aisi substring ni chahiye jisme ek char 2 baar aarha ho saath m ya uss substring m agr aaya toh phir difference > 1 ho jayega toh bss mujhe ye dekhna h ki ek toh unique characters kitne hai and periodic hona chahiye ek baar string m saare unique aane ke baad then phirse repeat hona chahiye ni toh balanced ni hogi perfectly.  -- toh chahiye hi aisi ki vo repeat kare after getting all the unique characters 
    loop(i, 0, len(s))
    {
        if (s[i] != s[i % st.size()])
        {
            correct = false;
        }
    }

    correct ? cout << "YES" << endl : cout << "NO" << endl;
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