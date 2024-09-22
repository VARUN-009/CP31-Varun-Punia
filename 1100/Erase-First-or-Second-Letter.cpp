#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

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

    string str;
    cin >> str;

    vi vec(26, 0);
    int ans = 0;

    // 1. first time jo character aarha hai bss ussi se lena dena hai kyuki 2nd time aaya toh uski possible strings pehle hi bn chuki hai toh phirse add ni karna hai
    // 2. sabse pehla char lo then usko fix kardo then har ek 2nd operation ek alg hi string dega tumhe toh possible jo jo banegi calculate karlo and then aage badho same process.(hum 2nd opeartion use kar rahe hai agr first hi karliya then jo string banegi vo toh aage mere pass aayegi hi na jab m aage badhunga kyuki m character ko fix kar rha hu)
    loop(i, 0, n)
    {
        if (vec[str[i] - 'a'] == 0)
        {
            vec[str[i] - 'a']++;
            ans += n - i;
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