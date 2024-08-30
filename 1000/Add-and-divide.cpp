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
    int a, b;
    cin >> a >> b;

    int moves = INT_MAX;

    // why 30 because let's say ki a=1e9 and b=1 toh b=1 m toh chlega hi ni ye toh ptahi hai hume let's say b=2 hai toh 30 operations karne padege tab jakr mera a=0 hoga.
    // How 30? because log2(1e9) = 30 log ek mathematical operation hai jo number ko uske base ki power m represent karta hai toh 1e9 will be 2 to the power 30. 
    loop(i, 0, 31)
    {
        int cnt = i;
        int A = a;
        int B = b + i;
        // because in case when b=1 then a/b will always give a so SIGTERM toh jab B mera 1 ho toh aage badho next step m jao 
        if(B == 1) continue;
        while (A > 0)
        {
            A /= B;
            cnt++;
        }
        moves = min(cnt, moves);
    }

    cout << moves << endl;
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