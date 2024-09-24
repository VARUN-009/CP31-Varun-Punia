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

    vi vec1(n);
    loop(i, 0, n)
    {
        cin >> vec1[i];
    }

    vi vec2(n);
    loop(i, 0, n)
    {
        cin >> vec2[i];
    }

    int left = -1, right = -1;

    // single loop m hi dono ka nikal liya ki left and right pos konsi hogi
    loop(i, 0, n)
    {
        if (vec1[i] != vec2[i])
        {
            right = i;

            if (left == -1)
            {
                left = i;
            }
        }
    }

    // ab dekho agr left pos m jo hai vo mera left-1 se >= hai means [left-1] <= [left] toh yaar m left ko aur km kar sakta hu na kyuki sort karunga toh bhi chota wala pehle hi aayega and same applies for right wala agr [right] <= [right+1] toh m usko include kar sakta hu aur
    while (left > 0 && vec2[left - 1] <= vec2[left])
    {
        left--;
    }

    while (right < n-1 && vec2[right] <= vec2[right + 1])
    {
        right++;
    }

    cout << left + 1 << " " << right + 1 << endl;
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