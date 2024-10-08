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
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    int ans = 0;

    // chote wale se bade ki taraf jana hai toh greedy socho sabse pehle sabse bade 8 se then 4 se then 2 se...agr kisi se ni kar paa rahe then break maanlo multiply karke hi ans tumahra b se jyada aarha hai then phir break -1
    while (a <= b)
    {
        if (a * 8 <= b)
        {
            a *= 8;
            ans++;
        }
        else if (a * 4 <= b)
        {
            a *= 4;
            ans++;
        }
        else if (a * 2 <= b)
        {
            a *= 2;
            ans++;
        }
        else
        {
            break;
        }
    }

    if (a == b)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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